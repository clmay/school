/* 1. Write a statement that displays the first and last name of the students that
   was the last to register for classes. Arrange by last name alphabetically. */
   
/* Each student that was the last to register for each class? Or what? */
   
-- TODO

/* 2. Show the description, section number, capacity and cost of the sections with
   the lowest course cost and the section capacity lower than or equal to the
   overall average section capacity. Arrange the list by description then
   section_no. */

SELECT
    c.description,
    s.section_no,
    c.cost,
    s.capacity
FROM
    course c
    INNER JOIN section   s ON s.course_no = c.course_no
WHERE
    c.cost = (
        SELECT
            MIN(cost)
        FROM
            course
    )
    AND s.capacity <= (
        SELECT
            AVG(capacity)
        FROM
            section
    )
ORDER BY
    c.description,
    s.section_no;

/* 3. Select the course number and total capacity for each course. Show only those
   courses with a total capacity less than the average capacity of all sections.
   Arrange the list by course number then total capacity. */

SELECT
    course_no,
    total_capacity
FROM
    (
        SELECT
            course_no,
            SUM(capacity) AS total_capacity
        FROM
            section
        GROUP BY
            course_no
    )
WHERE
    total_capacity < (
        SELECT
            AVG(capacity)
        FROM
            section
    )
GROUP BY
    course_no,
    total_capacity
ORDER BY
    course_no,
    total_capacity;

/* 4. Choose most ambitious students by showing the student ID for those students
   enrolled in the most sections. Arrange the list by student ID. */

SELECT
    student_id,
    most_classes
FROM
    (
        SELECT
            student_id,
            COUNT(*) as most_classes
        FROM
            enrollment
        GROUP BY
            student_id
        ORDER BY
            student_id
    )
WHERE
    most_classes = (
        SELECT
            MAX(COUNT(*))
        FROM
            enrollment
        GROUP BY
            student_id
    )
ORDER BY
    student_id;

/* 5. Select the Student ID and section ID of enrolled students living in Zip Code
   11373. Arrange the list by Student ID then by Section ID. Order by student_id
   then section ID. */



/* 6. Display the course number and the course description of courses taught by
   Marilyn Frantzen. Arrange the list by description then course number. */



/* 7. Show the first and last names of students who are not enrolled in any class.
   Arrange the list by last name then first name. */



/* 8. Determine the name, course description, and section ID of the students who
   had the lowest Project (PJ) grade from all courses. Arrange the list by last
   name then first name then description. */



/* 9. Select the sections that are full by comparing capacity to the number
   enrolled. Show the number enrolled, the section capacity and the section ID.
   Order by number enrolled, then section ID. */



/* 10. Show the course number, description and cost of the cheapest courses.
    Arrange the list by course number then description. */


