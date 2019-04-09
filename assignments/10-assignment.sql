/* 1. Insert a new instructor: Mr. Hugo Reyes with an ID of 815. His address is
2342 Oceanic Way, 07002. He doesn't have a phone number. */

SAVEPOINT beginning;

/*
DESC instructor;
*/

INSERT INTO instructor (
    instructor_id,
    salutation,
    first_name,
    last_name,
    street_address,
    zip,
    created_by,
    created_date,
    modified_by,
    modified_date
)
VALUES (
    815,
    'Mr.',
    'Hugo',
    'Reyes',
    '2342 Oceanic Way',
    '07002',
    USER,
    SYSDATE,
    USER,
    SYSDATE
);

/*
SELECT
    instructor_id, salutation, first_name, last_name, street_address, zip, created_by, created_date, modified_by, modified_date
FROM
    instructor
WHERE
    instructor_id = 815;
*/

SAVEPOINT problem1;

/* 2. Create a new section ID of 48 for Mr. Reyes. He'll be teaching section 4 of
the Project Management Course (142) beginning on September 22, 2011 at 8:15am in
Room L211. The capacity is 15 students. */

/*
DESC section;
*/

INSERT INTO section (
    section_id,
    course_no,
    section_no,
    start_date_time,
    location,
    instructor_id,
    capacity,
    created_by,
    created_date,
    modified_by,
    modified_date
)
VALUES (
    48,
    142,
    4,
    TO_DATE('2011-09-22 8:15 AM', 'YYYY--MM-DD HH:MI AM'),
    'L211',
    815,
    15,
    USER,
    SYSDATE,
    USER,
    SYSDATE
);

/*
SELECT
    section_id,
    course_no,
    section_no,
    start_date_time,
    location,
    instructor_id,
    capacity,
    created_by,
    created_date,
    modified_by,
    modified_date
FROM
    section
WHERE
    section_id = 48;
*/

SAVEPOINT problem2;

/* 3. Enroll students 375, 137, 266 and 382 in the section of the course you just
created. Their enrollment date should be the current date. (Use ONE INSERT
statement). */

/*
DESC enrollment;
*/

INSERT INTO enrollment (
    student_id,
    section_id,
    enroll_date,
    created_by,
    created_date,
    modified_by,
    modified_date
)
SELECT
    student_id,
    48,
    SYSDATE,
    USER,
    SYSDATE,
    USER,
    SYSDATE
FROM
    student
WHERE
    student_id IN (375, 137, 266, 382);

/*
SELECT
    student_id,
    section_id,
    enroll_date,
    created_by,
    created_date,
    modified_by,
    modified_date
FROM
    enrollment
WHERE
    student_id IN (375, 137, 266, 382)
    AND section_id = 48;
*/

SAVEPOINT problem3;

/* 4. Remove the enrollment for student 147 from section 120. Note the error. You
cannot delete the enrollment record because there are foreign keys in the Grade
table that depend on the Enrollment table records, thus creating an integrity
constraint violation. */

/*
DELETE FROM
    enrollment
WHERE
    student_id = 147
    AND section_id = 120;
*/

/* First remove all grades for student 147, section 120 and then remove the
enrollment for student 147, section 120.  (Use two DELETE statements) */

DELETE FROM
    grade
WHERE
    student_id = 147
    AND section_id = 120;

DELETE FROM
    enrollment
WHERE
    student_id = 147
    AND section_id = 120;

SAVEPOINT problem4;

/* 5. Use the same procedure to remove the enrollment record for student 180 in
section 119. */

DELETE FROM
    grade
WHERE
    student_id = 180
    AND section_id = 119;

DELETE FROM
    enrollment
WHERE
    student_id = 180
    AND section_id = 119;

SAVEPOINT problem5;

/* 6. Change Mr. Reyes’ (ID 815) phone number to be 4815162342. */

UPDATE
    instructor
SET
    phone = 4815162342
WHERE
    instructor_id = 815;

SAVEPOINT problem6;

/* 7. Change the grade to 100 on the first homework (HM) assignment for each
student in section 119. */

UPDATE
    grade
SET
    numeric_grade = 100
WHERE
    grade_type_code = 'HM'
    AND grade_code_occurrence = 1
    AND section_id = 119;

SAVEPOINT problem7;

/* 8. Increase the final exam (FI) score for each student in section 119 by 10
percent. */

UPDATE
    grade
SET
    numeric_grade = 1.1 * numeric_grade
WHERE
    grade_type_code = 'FI'
    AND section_id = 119;

SAVEPOINT problem8;

/* 9. For each section of the Project Management course, list the section ID,
location and number of students enrolled. Sort by section ID */

SELECT
    s.section_id,
    s.location,
    NVL(inner.num_enrolled, 0)
FROM
    course c
    INNER JOIN section s ON s.course_no = c.course_no
    LEFT OUTER JOIN (
        SELECT
            e.section_id,
            COUNT(*) AS num_enrolled
        FROM
            enrollment e
            INNER JOIN section s ON s.section_id = e.section_id
            INNER JOIN course c ON c.course_no = s.course_no
        WHERE
            c.description = 'Project Management'
        GROUP BY
            e.section_id
    ) inner ON inner.section_id = s.section_id
WHERE
    c.description = 'Project Management'
ORDER BY
    s.section_id;

/* 10. Provide an alphabetic list of instructor names and phone numbers for
instructors that teach the Project Management course. */

SELECT
    i.first_name,
    i.last_name,
    i.phone
FROM
    instructor i
    INNER JOIN section s ON s.instructor_id = i.instructor_id
    INNER JOIN course c ON c.course_no = s.course_no
WHERE
    c.description = 'Project Management'
ORDER BY
    i.last_name,
    i.first_name;
    

/* 11. Provide a list of students in section 119 along with their average numeric
grade. Include the student id, student name and average grade. Format the
average to two places.  Sort by student ID. */

SELECT
    g.student_id,
    s.first_name,
    s.last_name,
    ROUND(AVG(g.numeric_grade), 2) as average
FROM
    grade g
    INNER JOIN enrollment e ON e.student_id = g.student_id
    INNER JOIN student s ON s.student_id = e.student_id
WHERE
    g.section_id = 119
GROUP BY
    g.student_id,
    s.first_name,
    s.last_name;

/* 12. Create a query to determine the number of instructors who have taught more
than 3 students in a course section taught in Room L211. */

SELECT
    COUNT(*) as numberofinstructors
FROM
    (
        SELECT
            e.section_id,
            s.instructor_id,
            COUNT(*)
        FROM
            enrollment e
            INNER JOIN section s ON s.section_id = e.section_id
        WHERE
            s.location = 'L211'
        HAVING
            COUNT(*) > 3
        GROUP BY
            e.section_id,
            s.instructor_id
    );


/* 13. Create a list of instructors that have taught only the Project Management
course (142). List the instructor's name (salutation, first name, last name) and
their phone number. */

SELECT
    i.salutation
    || ' '
    || i.first_name
    || ' '
    || i.last_name AS instructor,
    SUBSTR(i.phone, 1, 3)
    || '-'
    || SUBSTR(i.phone, 4, 3)
    || '-'
    || SUBSTR(i.phone, 7, 4) AS phone
FROM
    instructor i
    INNER JOIN section s ON s.instructor_id = i.instructor_id
    INNER JOIN course c ON c.course_no = s.course_no
WHERE
    c.description = 'Project Management'
    AND i.instructor_id NOT IN (
        SELECT
            i.instructor_id
        FROM
            instructor i
            INNER JOIN section s ON s.instructor_id = i.instructor_id
            INNER JOIN course c ON c.course_no = s.course_no
        WHERE
            c.description != 'Project Management'
    );

/* 14. List student names, section id and course number for students that have not
yet received any grades in the course section 48. */

SELECT
    st.first_name,
    st.last_name,
    e.section_id,
    s.course_no
FROM
    enrollment e
INNER JOIN student st ON st.student_id = e.student_id
INNER JOIN section s ON s.section_id = e.section_id
LEFT OUTER JOIN (
        SELECT
            student_id
        FROM
            grade
        WHERE section_id = 48
            AND numeric_grade IS NULL
    ) no_grades ON no_grades.student_id = e.student_id
WHERE e.section_id = 48;

/* 15. Create a query that will list each unique section start time along with the
number of unique courses (not sections) that have been taught at that time. Sort
by start time. */
    
SELECT
    time,
    COUNT(*)
FROM
    (
        SELECT DISTINCT
           course_no,
           TO_CHAR(s.start_date_time, 'HH:MI AM') AS time
        FROM
            section s
    )
GROUP BY
    time
ORDER BY
    time;

ROLLBACK TO SAVEPOINT beginning;