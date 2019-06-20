1. List the names of instructors who have not used projects (PJ) as a basis for
   grading in their courses. Arrange by last name.

```
LAST_NAME    FIRST_NAME
------------ ----------
Chow         Rick
Schorin      Nina
Willig       Irene
(3 Rows)
```

2. Determine the number of students who received a below average grade on the
   final exam (FI) in section 86.

```
BELOW_AVERAGE
------------
3
(1 Row)
```

3. List the city and state that have the highest number of students enrolled.

```
CITY       ST
---------- --
Brooklyn   NY
(1 Row)
```

4. Provide the student_id, name and final exam grade of the student(s) that
   received the lowest score on the final exam (FI) in course section 81.

```
STUDENT_ID FIRST_NAME LAST_NAME      NUMERIC_GRADE
---------- ---------- -------------- -------------
240        Z.A.       Scrittorale    83
(1 Row)
```

5. List the student id and name of students who have taken the same course more
   than once. Arrange by last name then first name.

```
STUDENT_ID LAST_NAME    FIRST_NAME
---------- ------------ ----------
102        Crocitto     Fred
232        Jung         Janet
256        Velasco      Lorrane
(3 Rows)
```

6. List the first and last names of the students who have enrolled in the fewest
   Sophomore (200 level) classes. Order by last name of the student.

```
FIRST_NAME                LAST_NAME
------------------------- -------------------------
Robert                    Boyd
Bessie                    Heedles
Angela                    Torres
Donna                     Walston
```

7. List the course number and course description of the courses with the highest
   number of enrolled students. Arrange the list on course description.

```
COURSE_NO DESCRIPTION
--------- --------------------------------------------------
25 Intro to Programming
```

8. List the names of the students who are taking a course where at least one
   section of the course begins at 10:30 AM. Sort by last name.

```
FIRST_NAME                LAST_NAME
------------------------- -------------------------
Suzanne M.                Abid
Alan                      Affinito
Gary                      Aung
...
Frank                     Viotty
Daniel                    Wicelinski
Salewa                    Zuckerberg
(65 rows selected)
```

9. List the first and last names of students are in trouble of failing section
   87 because they received a score on the final exam that was below the average of
   the rest of the class for that final exam. Order the list by last name.

```
FIRST_NAME                LAST_NAME
------------------------- -------------------------
Catherine                 Mierzwa
Sean                      Pineda
```

10. Provide an alphabetic list containing the full names of students (order by
    last name) and phone number who are the smartest students because they have
    taken at least one of the database courses. (Intro to SQL, Oracle Tools, PL/SQL
    Programming, Database Design, Database System Principles, DB Programming with
    Java). Your query must call the class by the description.

```
FIRST_NAME                LAST_NAME                 PHONE
------------------------- ------------------------- ---------------
Edwin                     Allende                   203-555-5555
J.                        Dalvi                     203-555-5555
Bessie                    Heedles                   201-555-5555
Victor                    Meshaj                    203-555-5555
```
