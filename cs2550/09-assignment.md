1. List the student ID, name and employer of the student that has enrolled the
most times. Arrange the list in alphabetical order of last name then first name.

```sql
STUDENT_ID LAST_NAME                 FIRST_NAME          EMPLOYER
---------- --------------- --------------------------------------
       124 Wicelinski                Daniel             Burke & Co.
       214 Williams                  Yvonne             Iarriott Hotels

(2 Rows)
```

2. List zip code, the first and last name and phone number of instructors who
teach students that live in same zipcode as their instructor  (the instructor
must teach them, not just live in the same zipcode).  Arrange the list by first
name.

```sql
ZIP          FIRST_NAME      LAST_NAME           PHONE
---------    ----------      ---------           -----
10025        Nina            Schorin             2125551212
10025        Todd            Smythe              2125551212

(2 Rows)
```

3. Provide a list of names and cities of students and instructors that live in
zipcode 10025. Identify each person's role as either "Student" or "Instructor".
Sort the list by role, last name and first name.

```sql
FIRST_NAME LAST_NAME      CITY        ROLE
---------- ------------ ------------ ----------
Charles     Lowry         New York    Instructor
Nina        Schorin       New York    Instructor
Todd        Smythe        New York    Instructor
Tom         Wojick        New York    Instructor
Jerry       Abdou         New York    Student
Nicole      Gillen        New York    Student
Frank       Pace          New York    Student

(7 Rows)
```

4. Create a query that lists location, number of sections taught in that
location and number of students enrolled in sections at that location. Sort by
location.

```sql
LOCATION   SECTIONS   STUDENTS
---------- ---------- ----------
H310        1          1
L206        1          8
L210       10         29
L211        3         10
L214       15         36
L500        2         14
L507       15         36
L509       25         72
L511        1          3
M200        1          1
M311        3         11
M500        1          5

(12 rows)
```

5. Create a query that shows all of the individual grades for student ID 139 in
section 95 and also the average of those grades. The individual grades should
come first with the average at the bottom. List the grade type code and numeric
grade. The average row should have a caption of, "Average for student 139 is".

```sql
GRADE_TYPE_CODE     GRADE
---------------     -----
QZ                  82
QZ                  83
PA                  92
MT                  99
HM                  75
HM                  75
HM                  85
HM                  85
FI                  76

Average for student 139 is  83.56

(10 rows)
```

6. Create an alphabetic listing of all instructors and the number of sections
that they have taught.

```sql
FIRST_NAME      LAST_NAME       SECTIONS
-------------- ---------------- --------
Rick            Chow                 0
Marilyn         Frantzen            10
Fernand         Hanks                9
Charles         Lowry                9
Anita           Morris              10
Gary            Pertez              10
Nina            Schorin             10
Todd            Smythe              10
Irene           Willig               0
Tom             Wojick              10

(10 Rows)
```

7. List the course number and description of courses wherein students have
received grades for all possible grade types offered. Order by course number.

```sql
COURSE_NO DESCRIPTION
--------- -----------
       20 Intro to Information Systems
       25 Intro to Programming
      100 Hands-On Windows
      120 Intro to Java Programming
      122 Intermediate Java Programming
      125 Java Developer I
      130 Intro to Unix
      135 Unix Tips and Techniques

8 rows selected
```

8. List all of the zip codes in Flushing, NY and the number of students from
each of the zip codes. Sort by zip code. Show  zero (0) for zip codes with no
students enrolled.

```sql
ZIP   CITY                      STUDENTS
----- ------------------------- --------
11354 Flushing                         0
11355 Flushing                         2
11358 Flushing                         1
11366 Flushing                         1

(4 Rows)
```

9. List course number and description all of the Programming courses and the
total number of enrollments for each course. Arrange by highest number of
enrollments.

```sql
COURSE_NO DESCRIPTION                                        ENROLLMENTS
--------- -------------------------------------------------- -----------
       25 Intro to Programming                                        45
      122 Intermediate Java Programming                               24
      120 Intro to Java Programming                                   23
      124 Advanced Java Programming                                    8
      450 DB Programming with Java                                     1
       80 Programming Techniques                                       0
      220 PL/SQL Programming                                           0
 
7 rows selected
```

10. List student ID and Name of all of the students in area code 617 along with
the number of enrollments each has. Alphabetize the list on last name and first
name.

```sql
STUDENT_ID FIRST_NAME       LAST_NAME            ENROLLMENTS
---------- ---------------- ------------  ------ -----------
       253 Walter            Boremmann                 1
       230 George            Kocka                     1
       278 Thomas E.         La Blank                  2
       396 James E.          Norman                    0
       108 Judy              Sethi                     1 

(5 Rows)
```