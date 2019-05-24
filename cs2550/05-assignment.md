1. List the full name and phone number for students that live in Newark, NJ.
Sort on last name and first name.

```
FIRST_NAME    LAST_NAME    PHONE
-----------   -----------  ------------
Howard        Leopta        201-555-5555
Deborah       Reyes         201-555-5555
Paul          Sikinger      201-555-5555

(3 Rows)
```

2. For all 300 level courses (300-399), list the course number, prerequisite
course number and prerequisite course description. Sort by course number.

```
COURSE_NO PREREQUISITE DESCRIPTION
--------- ------------ -------------------------------
330          130 Intro to Unix
350          125 Java Developer I

(2 Rows)
```

3. List the course number and description for all 100-level courses taught by
Charles Lowry. Arrange the list in order of course number.

```
COURSE_NO         DESCRIPTION
-------------- ----------------------------------------
120                Intro to Java Programming
122                Intermediate Java Programming
125                Java Developer I
132                Basics of Unix Admin
140                Systems Analysis
145                Internet Protocols

(6 rows)
```

4. List the grade type code, grade type description and number per section of
the grade types in course 144. Arrange by description.

```
GRADE_TYPE_CODE  DESCRIPTION      NUMBER_PER_SECTION
---------------  ----------       ----------------------
FI               Final             1
HM               Homework          4
MT               Midterm           1
PA               Participation     1
QZ               Quiz              4

(5 Rows)
```

5. Provide an alphabetic list of students (student last name followed by first
name) who have an overall grade average of 93 or higher. The name should be
one column, last name first and sorted on last name then first name.

```
STUDENT_NAME
----------------
Carcia, Michael
Diokno, M.
Moffat, Edgar

(3 Rows)
```

6. List the names and address (including city and state) for all faculty who
have taught less than 10 course sections.

```
FIRST_NAME  LAST_NAME STREET_ADDRESS   CITY      STATE  ZIP
----------  --------- ---------------  --------  -----  -----
Fernand     Hanks     100 East 87th    New York  NY     10015
Charles     Lowry     518 West 120th   New York  NY     10025

(2 Rows)
```

7. List the course number and number of students enrolled in courses that don’t
have a prerequisite. Sort the list by number of students enrolled from highest
to lowest.

```
COURSE_NO    ENROLLED
---------- ------------
20                  9
310                 4
146                 3
10                  1

(4 Rows)
```

8. Provide an alphabetic list of students (first and last name and phone number)
from Flushing, NY who enrolled prior to 10:20am on February 2, 2007.

```
FIRST_NAME  LAST_NAME   PHONE
----------  ----------  ------------
Mardig      Abdou       718-555-5555
Anil        Kulina      718-555-5555

(2 Rows)
```

9. Provide a listing of courses that include projects as a part of their grading
criteria.

```
COURSE_NO
----------------------
20
25
100
120
122
124
125
130
135

(9 rows)
```

10. List the highest grade on the final exam that was given to a student in
course 145.

```
HIGHEST_FINAL_GRADE
----------------------
92

(1 Row)
```
