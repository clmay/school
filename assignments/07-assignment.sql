/* =====
    1. List the names of instructors who have not used projects (PJ) as a basis for
    grading in their courses. Arrange by last name.
===== */
SELECT
    i.last_name,
    i.first_name
FROM
    instructor i
WHERE
    i.instructor_id NOT IN
    (
        SELECT DISTINCT
            i.instructor_id
        FROM
            instructor   i
            INNER JOIN section      s ON s.instructor_id = i.instructor_id
            INNER JOIN grade        g ON g.section_id = s.section_id
        WHERE
            g.grade_type_code = 'PJ'
    )
ORDER BY
    i.last_name;


/* =====
    2. Determine the number of students who received a below average grade on the
    final exam (FI) in section 86.
===== */

SELECT
    COUNT(*) AS below_average
FROM
    grade g
WHERE
    g.numeric_grade < 
    (
        SELECT
            AVG(g.numeric_grade)
        FROM
            grade g
        WHERE
            g.section_id = 86
            AND g.grade_type_code = 'FI'
    )
    AND g.section_id = 86
    AND g.grade_type_code = 'FI';


/* =====
    3. List the city and state that have the highest number of students enrolled.
===== */

SELECT
    z.city,
    z.state
FROM
    zipcode   z
    INNER JOIN student   s ON s.zip = z.zip
HAVING
    COUNT(*) =
    (
        SELECT
            MAX(num_students)
        FROM
        (
            SELECT
                z.city,
                z.state,
                COUNT(*) AS num_students
            FROM
                zipcode   z
                INNER JOIN student   s ON s.zip = z.zip
            GROUP BY
                z.city,
                z.state
        )
    )
GROUP BY
    z.city,
    z.state;


/* =====
    4. Provide the student_id, name and final exam grade of the student(s) that
    received the lowest score on the final exam (FI) in course section 81.
===== */

SELECT
    s.student_id,
    s.first_name,
    s.last_name,
    g.numeric_grade
FROM
    student s
    INNER JOIN grade g ON g.student_id = s.student_id
WHERE
    g.numeric_grade =
    (
        SELECT
            MIN(g.numeric_grade) AS lowest_grade
        FROM
            student s
            INNER JOIN grade g ON g.student_id = s.student_id
        WHERE
            g.section_id = 81
            AND g.grade_type_code = 'FI'
    )
    AND g.section_id = 81
    AND g.grade_type_code = 'FI';


/* =====
    5. List the student id and name of students who have taken the same course more
    than once. Arrange by last name then first name.
===== */

SELECT
    s.student_id,
    s.last_name,
    s.first_name
FROM
    student      s
    INNER JOIN enrollment e ON e.student_id = s.student_id
    INNER JOIN section sect ON sect.section_id = e.section_id
HAVING
    COUNT(*) >= 2
GROUP BY
    s.student_id,
    s.first_name,
    s.last_name,
    sect.course_no
ORDER BY
    s.last_name,
    s.first_name;

/* ----- OR -----
SELECT
    student_id,
    last_name,
    first_name
FROM
(
    SELECT
        s.student_id,
        s.first_name,
        s.last_name,
        COUNT(*)
    FROM
        student s
        INNER JOIN enrollment e ON e.student_id = s.student_id
        INNER JOIN section sect ON sect.section_id = e.section_id
    HAVING
        COUNT(*) >= 2
    GROUP BY
        s.student_id,
        s.first_name,
        s.last_name,
        sect.course_no
)
ORDER BY
    last_name,
    first_name;
*/


/* =====
    6. List the first and last names of the students who have enrolled in the fewest
    Sophomore (200 level) classes. Order by last name of the student
===== */

SELECT
    s.first_name,
    s.last_name,
    COUNT(*) as min_soph_classes
FROM
    student s
    INNER JOIN enrollment e ON e.student_id = s.student_id
    INNER JOIN section sect ON sect.section_id = e.section_id
WHERE
    sect.course_no BETWEEN 200 AND 299
GROUP BY
    s.first_name,
    s.last_name
HAVING
    COUNT(*) =
    (
        SELECT
            MIN(num_soph_classes)
        FROM
        (
            SELECT
                s.student_id,
                COUNT(*) as num_soph_classes
            FROM
                student s
                INNER JOIN enrollment e ON e.student_id = s.student_id
                INNER JOIN section sect ON sect.section_id = e.section_id
            WHERE
                sect.course_no BETWEEN 200 AND 299
            GROUP BY
                s.student_id
            ORDER BY
                s.student_id
        )
    )
ORDER BY
    s.last_name;

/* =====
    7. List the course number and course description of the courses with the highest
    number of enrolled students. Arrange the list on course description.
===== */

SELECT
    c.course_no,
    c.description
FROM
    course c
    INNER JOIN section s ON s.course_no = c.course_no
    INNER JOIN enrollment e ON e.section_id = s.section_id
GROUP BY
    c.course_no,
    c.description
HAVING
    COUNT(*) = 
        (
            SELECT
                MAX(num_enrolled)
            FROM
                (
                    SELECT
                        c.course_no,
                        c.description,
                        COUNT(*) as num_enrolled
                    FROM
                        course c
                        INNER JOIN section s ON s.course_no = c.course_no
                        INNER JOIN enrollment e ON e.section_id = s.section_id
                    GROUP BY
                        c.course_no,
                        c.description
                )
        );


/* =====
    8. List the names of the students who are taking a course where at least one
    section of the course begins at 10:30 AM. Sort by last name.
===== */


SELECT
    s.first_name,
    s.last_name
FROM
    student s
    INNER JOIN enrollment e ON e.student_id = s.student_id
    INNER JOIN section sect ON sect.section_id = e.section_id
    INNER JOIN course c ON c.course_no = sect.course_no
WHERE
    c.course_no IN
        (
            SELECT
                c.course_no
            FROM
                course c
                INNER JOIN section sect ON sect.course_no = c.course_no
            WHERE
                sect.section_id IN
                (
                    SELECT
                        sect.section_id
                    FROM
                        section sect
                    WHERE
                        TO_CHAR(sect.start_date_time, 'HH:MI') = '10:30'
                )
        )
GROUP BY
    s.first_name,
    s.last_name
ORDER BY
    s.last_name;


/* =====
    9. List the first and last names of students are in trouble of failing section
    87 because they received a score on the final exam that was below the average of
    the rest of the class for that final exam. Order the list by last name
===== */

/* =====
    10. Provide an alphabetic list containing the full names of students (order by
    last name) and phone number who are the smartest students because they have
    taken at least one of the database courses. (Intro to SQL, Oracle Tools, PL/SQL
    Programming, Database Design, Database System Principles, DB Programming with
    Java). Your query must call the class by the description.
===== */