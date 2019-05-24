-- 1. List the student ID of the student that has enrolled in the most sections of
-- 100 level courses (100 - 199).

SELECT
    MAX(e.student_id)
FROM
    (SELECT
        e.student_id,
        COUNT(*) AS num_sections
    FROM enrollment e
        INNER JOIN section s ON s.section_id = e.section_id
    WHERE
        s.section_id >= 100 AND s.section_id < 200
    GROUP BY
        e.student_id);

-- 2. Provide the student_id and name of the student that scored highest on the
-- final exam (FI) in course 230 section 100. Sort by the student ID.

-- 3. Provide an alphabetic listing of instructors who have never taught a course
-- section. List the salutation, first name, last name and zip code.

-- 4. Generate an alphabetic listing containing the last names and final exam grade
-- (FI) of students who scored above average on the final exam for section 90.

-- 5. List the course number and course description of the courses with the lowest
-- number of enrolled students. Arrange the list on course number.

-- 6. List course number and course description for all courses that have at least
-- one 10:30AM section. Sort by course number.

-- 7. List the student_id and last_name of students who received a below average
-- grade on the third quiz in section 120. Arrange the list by student ID.

-- 8. Provide an alphabetic list containing the full names and phone numbers of
-- students who have taken both the Systems Analysis and the Project Management
-- courses.  You must use the title of the course in your query, not the course
-- number.

-- 9. List the instructor name and course description of the Java courses that have
-- been taught by the Instructor that has taught the most Java courses. Sort on
-- instructor name and course description.

-- 10. List the student_id and last_name of students who received an above average
-- grade on the Final Exam in section 130. Arrange the list by last name.