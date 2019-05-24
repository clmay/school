-- 1. List the full name and phone number for students that live in Newark, NJ.
-- Sort on last name and first name.
--
SELECT
    s.first_name,
    s.last_name,
    s.phone
FROM
    student   s
    INNER JOIN zipcode   z ON s.zip = z.zip
WHERE
    z.city = 'Newark'
    AND z.state = 'NJ'
ORDER BY
    s.last_name,
    s.first_name;

-- 2. For all 300 level courses (300-399), list the course number, prerequisite
-- course number and prerequisite course description. Sort by course number.

SELECT
    c.course_no,
    p.course_no     AS prerequisite,
    p.description   AS description
FROM
    course   c
    INNER JOIN course   p ON p.course_no = c.prerequisite
WHERE
    c.course_no BETWEEN 300 AND 400
ORDER BY
    c.course_no;

-- 3. List the course number and description for all 100-level courses taught by
-- Charles Lowry. Arrange the list in order of course number.

SELECT
    c.course_no,
    c.description
FROM
    course       c
    INNER JOIN section      s ON s.course_no = c.course_no
    INNER JOIN instructor   i ON i.instructor_id = s.instructor_id
WHERE
    i.first_name = 'Charles'
    AND i.last_name = 'Lowry'
    AND c.course_no BETWEEN 100 AND 200
ORDER BY
    c.course_no;

-- 4. List the grade type code, grade type description and number per section of
-- the grade types in course 144. Arrange by description.

SELECT DISTINCT
    gt.grade_type_code,
    gt.description,
    gtw.number_per_section
FROM
    grade_type gt
    INNER JOIN grade_type_weight gtw ON gtw.grade_type_code = gt.grade_type_code
    INNER JOIN section s ON s.section_id = gtw.section_id
WHERE
    s.course_no = 144
ORDER BY
    gt.description;

-- 5. Provide an alphabetic list of students (student last name followed by first
-- name) who have an overall grade average of 93 or higher. The name should be
-- one column, last name first and sorted on last name then first name.

SELECT
    s.last_name
    || ', '
    || s.first_name AS full_name
FROM
    student      s
    INNER JOIN enrollment   e ON e.student_id = s.student_id
    INNER JOIN grade        g ON g.student_id = e.student_id
GROUP BY
    s.last_name,
    s.first_name
HAVING
    AVG(g.numeric_grade) > 93
ORDER BY
    s.last_name,
    s.first_name;

-- 6. List the names and address (including city and state) for all faculty who
-- have taught less than 10 course sections.

SELECT
    i.first_name,
    i.last_name,
    i.street_address,
    z.city,
    z.state,
    z.zip
FROM
    instructor   i
    INNER JOIN zipcode      z ON z.zip = i.zip
    INNER JOIN section      s ON s.instructor_id = i.instructor_id
GROUP BY
    i.first_name,
    i.last_name,
    i.street_address,
    z.city,
    z.state,
    z.zip
HAVING
    COUNT(*) < 10
ORDER BY
    i.last_name;

-- 7. List the course number and number of students enrolled in courses that don’t
-- have a prerequisite. Sort the list by number of students enrolled from highest
-- to lowest.

SELECT
    c.course_no,
    COUNT(*) AS enrolled
FROM
    course       c
    INNER JOIN section      s ON s.course_no = c.course_no
    INNER JOIN enrollment   e ON e.section_id = s.section_id
WHERE
    c.prerequisite IS NULL
GROUP BY
    c.course_no
ORDER BY
    enrolled DESC;

-- 8. Provide an alphabetic list of students (first and last name and phone number)
-- from Flushing, NY who enrolled prior to 10:20am on February 2, 2007.

SELECT DISTINCT
    s.first_name,
    s.last_name,
    s.phone,
    e.enroll_date
FROM
    student      s
    INNER JOIN zipcode      z ON z.zip = s.zip
    INNER JOIN enrollment   e ON e.student_id = s.student_id
WHERE
    z.city = 'Flushing'
    AND z.state = 'NY'
    AND e.enroll_date < TO_DATE('2007-02-03', 'YYYY-MM-DD')
ORDER BY
    s.last_name,
    s.first_name;

-- 9. Provide a listing of courses that include projects as a part of their grading
-- criteria.

SELECT
    c.course_no
FROM
    course              c
    INNER JOIN section             s ON s.course_no = c.course_no
    INNER JOIN grade_type_weight   gtw ON gtw.section_id = s.section_id
WHERE
    gtw.grade_type_code = 'PJ';

-- 10. List the highest grade on the final exam that was given to a student in
-- course 145.

SELECT
    MAX(g.numeric_grade) AS highest_final_grade
FROM
    grade        g
    INNER JOIN enrollment   e ON e.section_id = g.section_id
    INNER JOIN section      s ON s.section_id = e.section_id
    INNER JOIN course       c ON c.course_no = s.course_no
WHERE
    g.grade_type_code = 'FI'
    AND s.course_no = 145;
