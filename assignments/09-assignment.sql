/* 1. List the student ID, name and employer of the student that has enrolled the
      most times. Arrange the list in alphabetical order of last name then first name. */

SELECT
    s.student_id,
    s.last_name,
    s.first_name,
    s.employer,
    COUNT(*)
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

-- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO

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

-- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO

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
    'Average for student 139 is '|| AVG(numeric_grade),
    ' ' as grade
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

-- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO -- TODO
-- Fix these results -- Fix these results -- Fix these results -- Fix these results -- Fix these results -- Fix these results

SELECT
    i.first_name,
    i.last_name,
    COUNT(*)
FROM
    instructor i
    LEFT OUTER JOIN section s ON s.instructor_id = i.instructor_id
GROUP BY
    i.instructor_id,
    i.first_name,
    i.last_name
ORDER BY
    i.last_name;

/* 7. List the course number and description of courses wherein students have
      received grades for all possible grade types offered. Order by course number. */



/* 8. List all of the zip codes in Flushing, NY and the number of students from
      each of the zip codes. Sort by zip code. Show  zero (0) for zip codes with no
      students enrolled. */



/* 9. List course number and description all of the Programming courses and the
      total number of enrollments for each course. Arrange by highest number of
      enrollments. */



/* 10. List student ID and Name of all of the students in area code 617 along with
       the number of enrollments each has. Alphabetize the list on last name and first
       name. */


