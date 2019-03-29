/* 1. List the student ID, name and employer of the student that has enrolled the
      most times. Arrange the list in alphabetical order of last name then first name. */

SELECT
    s.student_id,
    s.last_name,
    s.first_name,
    s.employer
FROM
    enrollment e
    INNER JOIN student s ON s.student_id = e.student_id
HAVING
    COUNT(*) = (
        SELECT
            MAX(times_enrolled) AS most_enrollments
        FROM
            (
                SELECT
                    student_id,
                    COUNT(*) AS times_enrolled
                FROM
                    enrollment
                GROUP BY
                    student_id
            )
    )
GROUP BY
    s.student_id,
    s.last_name,
    s.first_name,
    s.employer
ORDER BY
    s.first_name,
    s.last_name;

/* 2. List zip code, the first and last name and phone number of instructors who
      teach students that live in same zipcode as their instructor  (the instructor
      must teach them, not just live in the same zipcode).  Arrange the list by first
      name. */

SELECT
    i.zip,
    i.first_name,
    i.last_name,
    i.phone
FROM instructor i
    INNER JOIN section s on s.instructor_id = i.instructor_id
    INNER JOIN enrollment e on e.section_id = s.section_id
    INNER JOIN student st on st.student_id = e.student_id
WHERE st.zip = i.zip
ORDER BY i.first_name;

/* 3. Provide a list of names and cities of students and instructors that live in
      zipcode 10025. Identify each person's role as either "Student" or "Instructor".
      Sort the list by role, last name and first name. */

SELECT
    s.first_name,
    s.last_name,
    z.city,
    'Student' AS role
FROM
    student s
    INNER JOIN zipcode z ON z.zip = s.zip
WHERE
    s.zip = 10025
UNION ALL
SELECT
    i.first_name,
    i.last_name,
    z.city,
    'Instructor' AS role
FROM
    instructor i
    INNER JOIN zipcode z ON z.zip = i.zip
WHERE i.zip = 10025
ORDER BY
    role,
    last_name,
    first_name;

/* 4. Create a query that lists location, number of sections taught in that
      location and number of students enrolled in sections at that location. Sort by
      location. */

SELECT DISTINCT
    s.location,
    locs.num_sections AS sections,
    sects.num_students AS students
FROM section s
INNER JOIN
    (
        SELECT
            s.location,
            COUNT(s.section_id) AS num_sections
        FROM section s
        GROUP BY s.location
    ) locs
ON
    s.location = locs.location
INNER JOIN
    (
        SELECT
            s.location,
            COUNT(*) AS num_students
        FROM
            section s
        INNER JOIN enrollment e ON e.section_id = s.section_id
        GROUP BY s.location
    ) sects
ON
    locs.location = sects.location
ORDER BY
    s.location;

/* 5. Create a query that shows all of the individual grades for student ID 139 in
      section 95 and also the average of those grades. The individual grades should
      come first with the average at the bottom. List the grade type code and numeric
      grade. The average row should have a caption of, "Average for student 139 is". */

SELECT
    grade_type_code,
    TO_CHAR(numeric_grade) AS grade
FROM
    grade
WHERE
    student_id = 139
    AND section_id = 95
UNION ALL
SELECT
    'Average for student 139 is '|| ROUND(AVG(numeric_grade), 2),
    ' ' AS grade
FROM
    grade
WHERE
    student_id = 139
    AND section_id = 95
ORDER BY
    1 DESC,
    2;

/* 6. Create an alphabetic listing of all instructors and the number of sections
      that they have taught. */

SELECT
    instructors.first_name,
    instructors.last_name,
    NVL(counts.num_sections, 0) AS sections
FROM
    (
        SELECT
            first_name,
            last_name,
            instructor_id
        FROM
            instructor
    ) instructors
LEFT OUTER JOIN
    (
        SELECT
            instructor_id,
            COUNT(*) AS num_sections
        FROM
            section
        GROUP BY
            instructor_id
    ) counts
ON
    counts.instructor_id = instructors.instructor_id
ORDER BY
    instructors.last_name;

/* 7. List the course number and description of courses wherein students have
      received grades for all possible grade types offered. Order by course number. */

SELECT
    course_no,
    description
FROM
    (
        SELECT DISTINCT
            g.grade_type_code,
            c.description,
            s.course_no
        FROM
            grade g
            INNER JOIN section s ON s.section_id = g.section_id
            INNER JOIN course c ON c.course_no = s.course_no
        ORDER BY s.course_no
    )
GROUP BY
    course_no,
    description
HAVING
    COUNT(*) = (
        SELECT
            COUNT(*)
        FROM
            grade_type
    )
ORDER BY
    course_no;

/* 8. List all of the zip codes in Flushing, NY and the number of students from
      each of the zip codes. Sort by zip code. Show  zero (0) for zip codes with no
      students enrolled. */

SELECT
    zips.zip,
    zips.city,
    NVL(counts.num_per_zip, 0) AS students
FROM
    (
        SELECT
            zip,
            city
        FROM
            zipcode
        WHERE
            city = 'Flushing'
            AND state = 'NY'
    ) zips
LEFT OUTER JOIN
    (
        SELECT
            zip,
            COUNT(*) AS num_per_zip
        FROM
            (
                SELECT DISTINCT
                    s.student_id,
                    s.zip,
                    z.city,
                    z.state
                FROM student s
                RIGHT JOIN enrollment e ON e.student_id = s.student_id
                INNER JOIN zipcode z ON z.zip = s.zip
                WHERE
                    z.city = 'Flushing'
                    AND z.state = 'NY'
            )
        GROUP BY zip
    ) counts
ON
    counts.zip = zips.zip
ORDER BY
    zip;

/* 9. List course number and description all of the Programming courses and the
      total number of enrollments for each course. Arrange by highest number of
      enrollments. */

SELECT
    courses.course_no,
    courses.description,
    NVL(counts.num_enrollments, 0) AS enrollments
FROM
    (
        SELECT
            course_no,
            description
        FROM
            course
        WHERE
            description LIKE '%Programming%'
    ) courses
LEFT OUTER JOIN
    (
        SELECT
            s.course_no,
            COUNT(*) AS num_enrollments
        FROM
            section s
            INNER JOIN enrollment e ON e.section_id = s.section_id
        GROUP BY
            s.course_no
    ) counts
ON
    counts.course_no = courses.course_no
ORDER BY
    enrollments DESC,
    courses.course_no;

/* 10. List student ID and Name of all of the students in area code 617 along with
       the number of enrollments each has. Alphabetize the list on last name and first
       name. */
SELECT
    students.student_id,
    students.first_name,
    students.last_name,
    NVL(counts.num_enrollments, 0) AS enrollments
FROM
    (
        SELECT
            s.student_id,
            s.first_name,
            s.last_name
        FROM
            student s
           
        WHERE
            s.phone LIKE '617%'
    ) students
LEFT OUTER JOIN
    (
        SELECT
            e.student_id,
            COUNT(*) AS num_enrollments
        FROM
            enrollment e
            INNER JOIN student s ON s.student_id = e.student_id
        WHERE
            s.phone LIKE '617%'
        GROUP BY
            e.student_id
    ) counts
ON
    counts.student_id = students.student_id
ORDER BY
    students.last_name,
    students.first_name;