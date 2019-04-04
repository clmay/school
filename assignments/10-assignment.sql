/* 1. Insert a new instructor: Mr. Hugo Reyes with an ID of 815. His address is
2342 Oceanic Way, 07002. He doesn't have a phone number. */

/* 2. Create a new section ID of 48 for Mr. Reyes. He'll be teaching section 4 of
the Project Management Course (142) beginning on September 22, 2011 at 8:15am in
Room L211. The capacity is 15 students. */

/* 3. Enroll students 375, 137, 266 and 382 in the section of the course you just
created. Their enrollment date should be the current date. (Use ONE INSERT
statement). */

/* 4. Remove the enrollment for student 147 from section 120. Note the error. You
cannot delete the enrollment record because there are foreign keys in the Grade
table that depend on the Enrollment table records, thus creating an integrity
constraint violation. */

/* First remove all grades for student 147, section 120 and then remove the
enrollment for student 147, section 120.  (Use two DELETE statements) */

/* 5. Use the same procedure to remove the enrollment record for student 180 in
section 119. */

/* 6. Change Mr. Reyes’ (ID 815) phone number to be 4815162342. */

/* 7. Change the grade to 100 on the first homework (HM) assignment for each
student in section 119. */

/* 8. Increase the final exam (FI) score for each student in section 119 by 10
percent. */

/* 9. For each section of the Project Management course, list the section ID,
location and number of students enrolled. Sort by section ID */

/* 10. Provide an alphabetic list of instructor names and phone numbers for
instructors that teach the Project Management course. */

/* 11. Provide a list of students in section 119 along with their average numeric
grade. Include the student id, student name and average grade. Format the
average to two places.  Sort by student ID. */

/* 12. Create a query to determine the number of instructors who have taught more
than 3 students in a course section taught in Room L211. */

/* 13. Create a list of instructors that have taught only the Project Management
course (142). List the instructor's name (salutation, first name, last name) and
their phone number. */

/* 14. List student names, section id and course number for students that have not
yet received any grades in the course section 48. */

/* 15. Create a query that will list each unique section start time along with the
number of unique courses (not sections) that have been taught at that time. Sort
by start time. */
