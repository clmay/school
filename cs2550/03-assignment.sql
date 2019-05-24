-- 1. List the first name, last name and phone number for all students that
-- registered on 2/13/2007. Arrange the list in order of last name and first name.

SELECT
    first_name,
    last_name,
    phone
FROM
    student
WHERE
    registration_date = TO_DATE('2007-02-13', 'YYYY-MM-DD')
ORDER BY
    last_name,
    first_name;

-- 2. List course number, section ID and start date for all sections located in L509.
-- Arrange by start date.

SELECT
    course_no,
    section_id,
    start_date_time
FROM
    section
WHERE
    location = 'L509'
ORDER BY
    start_date_time;

-- 3. List the course number, section ID, start date, instructor ID and capacity
-- for all courses with a start date in July 2007. Arrange the list by start date
-- and course number.

SELECT
    course_no,
    section_id,
    start_date_time,
    instructor_id,
    capacity
FROM
    section
WHERE
    start_date_time > TO_DATE('2007-07-01', 'YYYY-MM-DD')
    AND start_date_time < TO_DATE('2007-08-01', 'YYYY-MM-DD')
ORDER BY
    start_date_time,
    course_no;

-- 4. List Student ID, Section ID and final grade for all students who have a
-- final grade and enrolled in January 2007.

SELECT
    student_id,
    section_id,
    numeric_grade
FROM
    grade
WHERE
    numeric_grade IS NOT NULL
    AND created_date > TO_DATE('2007-01-01', 'YYYY-MM-DD')
    AND created_date < TO_DATE('2007-02-01', 'YYYY-MM-DD');

-- 5. Create a query using the Oracle Dual Table that returns the date of the end
-- of the semester for courses that begin on January 11, 2016. The semester is 109
-- days long.

SELECT
    TO_DATE(TO_DATE('2016-01-11', 'YYYY-MM-DD') + 109) AS semester_end_date
FROM
    dual;

-- 6. Provide a list of course numbers and locations for sections being taught
-- in the even numbered rooms located in building L.

SELECT
    course_no,
    location
FROM
    section
WHERE
    location LIKE 'L%%2'
    OR location LIKE 'L%%4'
    OR location LIKE 'L%%6'
    OR location LIKE 'L%%8'
    OR location LIKE 'L%%0';

-- 7. Provide a list of Students in zip code 11368 that registered 3 or more days
-- after their student record was created.

SELECT
    last_name,
    first_name
FROM
    student
WHERE
    zip = '11368'
    AND registration_date >= created_date + 3;

-- 8. Create a list of student names along with the number of years since they
-- registered (round to 2 decimal places) for those students from area code 212.
-- Sort the list on the number of years from highest to lowest. Note that your
-- years may not exactly match my numbers depending on when you ran your query
-- compared to when I ran mine.



-- 9. Create a list of starting times for all course sections. Eliminate duplicates.



-- 10. List the Student ID, Section ID and time enrolled for all students who
-- enrolled at 10:19am. Arrange the list by student ID.
