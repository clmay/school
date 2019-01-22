-- 1. List the salutation and names (first and last name) of all instructors in
-- alphabetical order (last name then first name).

SELECT salutation, first_name, last_name
  FROM instructor
    ORDER BY last_name, first_name;

-- 2. Provide a list of distinct locations that have been used to teach sections of
-- courses. Arrange the list in order of location.

SELECT DISTINCT location
  FROM section
    ORDER BY location;

-- 3. List the first and last names of Instructors with a first name starting with
-- “T”. Sort them in alphabetical order.

SELECT first_name, last_name
  FROM instructor
    WHERE first_name LIKE 'T%'
    ORDER BY last_name, first_name;

-- 4. List the phone number, full name (as one column) and employer for all
-- students with a last name of “Torres”.  Sort by Employer

SELECT phone, first_name||' '||last_name, employer
  FROM student
    WHERE last_name = 'Torres'
    ORDER BY employer;

-- 5. List the course number and course description of all courses that have a
-- prerequisite of course 350. Arrange in order of course number.

SELECT course_no, description
    FROM course
        WHERE prerequisite = 350
        ORDER BY course_no;

-- 6. List the course number, description and cost for all 200 level courses
-- (200-299) costing less than $1100.  Arrange by course number.

SELECT course_no, description, cost
    FROM course
        WHERE (course_no > 200 AND cost < 1100)
        ORDER BY course_no;

-- 7. List the course number, section id and location for all 100 level courses
-- (100 through 199) that are taught in room L214 or L509. Order by location and
-- course number.

SELECT course_no, section_id, location
    FROM section
        WHERE course_no BETWEEN 100 AND 200
        AND location IN ('L214', 'L509')
        ORDER BY location, course_no;

-- 8. List the course number, section id and capacity for classes with a capacity
-- of 12 or 15 (use the IN clause). Order the list by course number and section id.
s
SELECT course_no, section_id, capacity
    FROM section
        WHERE capacity IN (12, 15)
        ORDER BY course_no, section_id;

-- 9. List the student id and grade for all of the midterm exam scores (MT) in
-- section 141. Arrange the list by student id and grade.

SELECT student_id, numeric_grade
    FROM grade
        WHERE section_id = 141
        AND grade_type_code = 'MT'
        ORDER BY student_id, numeric_grade;

-- 10. List the course number and description for all 300 level courses that have a
-- prerequisite, arranged on course description.

SELECT course_no, description
    FROM course
        WHERE course_no BETWEEN 300 AND 400
        AND prerequisite IS NOT NULL
        ORDER BY description;
