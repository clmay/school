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
    i.instructor_id NOT IN (
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
    g.numeric_grade < (
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
    COUNT(*) = (
        SELECT
            MAX(num_students)
        FROM (
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
    g.numeric_grade = (
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
    st.student_id,
    st.last_name,
    st.first_name
FROM
    student      st
    INNER JOIN enrollment   e ON e.student_id = st.student_id
    INNER JOIN section      sec ON sec.section_id = e.section_id
HAVING
    COUNT(*) >= 2
GROUP BY
    st.student_id,
    st.first_name,
    st.last_name,
    sec.course_no
ORDER BY
    st.last_name,
    st.first_name;

/* ----- OR -----
SELECT
    student_id,
    last_name,
    first_name
FROM (
        SELECT
            st.student_id,
            st.first_name,
            st.last_name,
            COUNT(*)
        FROM
            student st
            INNER JOIN enrollment e ON e.student_id = st.student_id
            INNER JOIN section sec ON sec.section_id = e.section_id
        HAVING
            COUNT(*) >= 2
        GROUP BY
            st.student_id,
            st.first_name,
            st.last_name,
            sec.course_no
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
    s.student_id
FROM
    student s
    INNER JOIN enrollment e ON e.student_id = s.student_id
    INNER JOIN section sec ON sec.section_id = e.section_id
HAVING
    COUNT(*) = (
                    SELECT
                        MIN(count_soph_classes)
                    FROM (
                            SELECT
                                COUNT(*) AS count_soph_classes
                            FROM
                                student s
                                INNER JOIN enrollment e ON e.student_id = s.student_id
                                INNER JOIN section sec ON sec.section_id = e.section_id
                            WHERE
                                sec.course_no BETWEEN 200 AND 299
                            GROUP BY
                                s.student_id
                        )
                );

/* =====
    7. List the course number and course description of the courses with the highest
    number of enrolled students. Arrange the list on course description.
===== */

/* =====
    8. List the names of the students who are taking a course where at least one
    section of the course begins at 10:30 AM. Sort by last name.
===== */

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