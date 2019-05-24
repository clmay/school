1. List the student ID of the student that has enrolled in the most sections of
100 level courses (100 - 199).

```sql
STUDENT_ID
----------
214
(1 Row)
```

2. Provide the student_id and name of the student that scored highest on the
final exam (FI) in course 230 section 100. Sort by the student ID.

```sql
STUDENT_ID LAST_NAME     FIRST_NAME
---------- ----------  ------------
262      Walston     Donna
(1 Row)
```

3. Provide an alphabetic listing of instructors who have never taught a course
section. List the salutation, first name, last name and zip code.

```sql
SALUTATION FIRST_NAME   LAST_NAME    ZIP
---------- ------------ ----------- -----
Hon        Rick          Chow        10015
Ms         Irene         Willig
(2 Rows)
```

4. Generate an alphabetic listing containing the last names and final exam grade
(FI) of students who scored above average on the final exam for section 90.

```sql
LAST_NAME                 NUMERIC_GRADE
------------------------- -------------
Da Silva                             92
Lopez                                91
(2 Rows)
```

5. List the course number and course description of the courses with the lowest
number of enrolled students. Arrange the list on course number.

```sql
COURSE_NO DESCRIPTION
--------- --------------------------------------------------
10 Technology Concepts
204 Intro to SQL
450 DB Programming with Java
(3 Rows)
```

6. List course number and course description for all courses that have at least
one 10:30AM section. Sort by course number.

```sql
COURSE_NO DESCRIPTION
--------- --------------------------------------------------
25 Intro to Programming
140 Systems Analysis
144 Database Design
147 GUI Design Lab
330 Network Administration
450 DB Programming with Java
(6 Rows)
```

7. List the student_id and last_name of students who received a below average
grade on the third quiz in section 120. Arrange the list by student ID.

```sql
STUDENT_ID LAST_NAME
---------- -------------------------
187 Garnes
(1 Row)
```

8. Provide an alphabetic list containing the full names and phone numbers of
students who have taken both the Systems Analysis and the Project Management
courses.  You must use the title of the course in your query, not the course
number.

```sql
FIRST_NAME    LAST_NAME     PHONE
------------ ------------- ---------------
Judy          Cahouet       718-555-5555
E.A.          Torres        718-555-5555
(2 Rows)
```

9. List the instructor name and course description of the Java courses that have
been taught by the Instructor that has taught the most Java courses. Sort on
instructor name and course description.

```sql
FIRST_NAME    LAST_NAME    COURSE_NO DESCRIPTION
------------ ------------ --------- ------------------
Fernand       Hanks        450       DB Programming with Java
Fernand       Hanks        122       Intermediate Java Programming
Fernand       Hanks        120       Intro to Java Programming
Fernand       Hanks        125       Java Developer I
Fernand       Hanks        146       Java for C/C++ Programmers
(5 rows)
```

10. List the student_id and last_name of students who received an above average
grade on the Final Exam in section 130. Arrange the list by last name.

```sql
STUDENT_ID LAST_NAME
---------- -------------------------
117             Kuehn
```