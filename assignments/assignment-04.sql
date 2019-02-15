-- 1. Create a query that returns the average cost for all courses. (Round to two
-- places).

SELECT
    ROUND(AVG(cost), 2) AS "Average Cost"
FROM
    course;

-- 2. Create a query that returns the total number of Students that registered
-- during February 2007. Alias the column as "February_Registrations".

SELECT
    COUNT(*) AS "February_Registrations"
FROM
    enrollment
WHERE
    TO_CHAR(enroll_date, 'YYYY-MM-DD') >= '2007-02-01'
    AND TO_CHAR(enroll_date, 'YYYY-MM-DD') < '2007-03-01';

-- 3. Create a query that returns the average, highest and lowest final exam scores
-- for Section 147.

SELECT
    AVG(numeric_grade) AS average,
    MAX(numeric_grade) AS highest,
    MIN(numeric_grade) AS lowest
FROM
    grade
WHERE
    grade_type_code = 'FI'
    AND section_id = '147'
GROUP BY
    section_id;

-- 4. List the city, state and number of zipcodes for all cities with more than two
-- zipcodes. Arrange by state and city.

SELECT
    city,
    state,
    COUNT(*) AS "ZIPCODES"
FROM
    zipcode
HAVING
    COUNT(zip) > 2
GROUP by
    city,
    state
ORDER BY
    state,
    city;

-- 5. Provide a list of Sections and the number of students enrolled in each
-- section for students who enrolled on 2/21/2007. Sort from highest to lowest on
-- the number of students enrolled.

SELECT
    section_id,
    COUNT(*) AS "ENROLLED"
FROM
    enrollment
WHERE
    TO_CHAR(enroll_date, 'YYYY-MM-DD') = '2007-02-21'
GROUP BY
    section_id
ORDER BY
    ENROLLED DESC;

-- 6. Create a query listing the student ID, Section ID and Average Grade for all
-- students in Section 86. Sort your list on the student ID and display all of the
-- average grades with 4 decimal places.

SELECT
    student_id,
    section_id,
    TO_CHAR(ROUND(AVG(numeric_grade), 4), '99.9999') AS "AVERAGEGRADE"
FROM
    grade
WHERE
    section_id = 86
GROUP BY
    student_id,
    section_id
ORDER BY
    student_id;

-- 7. Create a query to determine the number of sections in which student ID 250 is
-- enrolled. Your output should contain the student ID and the number of sections
-- enrolled.

SELECT
    student_id,
    COUNT(*) AS sections
FROM
    enrollment
WHERE
    student_id = 250
GROUP BY student_id;

-- 8. List the section ID and lowest quiz score for all sections that has the low
-- score greater than a B (greater than 80). Arrange by section id.

SELECT
    section_id,
    MIN(numeric_grade) AS "LOWSCORE"
FROM
    grade
WHERE
    grade_type_code = 'QZ'
HAVING
    MIN(numeric_grade) > 80
GROUP by section_id order by section_id;

-- 9. List the names of Employers having more than 5 student employees. Your output
-- should contain the employer name and the number of student employees. Arrange
-- the output on the number of employees from lowest to highest.

SELECT
    employer,
    COUNT(*) AS employees
FROM
    student
HAVING
    COUNT(employer) > 5
GROUP BY
    employer
ORDER BY
    employees;

-- 10. List the section ID, number of participation grades and lowest participation
-- grade for all sections with more than 15 participation grades. Arrange by
-- section id.

SELECT
    section_id,
    COUNT(*) AS participation_grades,
    MIN(numeric_grade) AS "LOWEST_GRADE"
FROM
    grade
WHERE
    grade_type_code = 'PA'
HAVING
    COUNT(section_id) > 15
GROUP BY
    section_id
ORDER BY
    section_id;
