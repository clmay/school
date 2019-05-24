1. Write a statement that displays the first and last name of the students that
   was the last to register for classes. Arrange by last name alphabetically.

```sql
FIRST_NAME      LAST_NAME
----------      ---------
Jerry           Abdou
Yvonne          Allende
Anna            Bathmanapan
Paul            Braun
Asian           Chirichella
Roger           Cowie
V.              Greenberg
Joel            Krot
Shirley         Leung
Margaret        Lloyd
Sengita         MacDonald, Jr.
Melvin          Martin
Michael         Miroff
James E.        Norman
V.              Saliternan
Allan           Simmons
Rafael A.       Torres
Vera            Wetcel

18 rows selected
```

2. Show the description, section number, capacity and cost of the sections with
   the lowest course cost and the section capacity  lower than or equal to the
   overall average section capacity. Arrange the list by description then
   section_no.

```sql
DESCRIPTION                 SECTION_NO COST     CAPACITY
--------------------------- ---------- -------- --------
Intro to the BASIC Language         1   1095    10
Intro to the BASIC Language         2   1095    15
Intro to the Internet               1   1095    12
Intro to the Internet               2   1095    15
Unix Tips and Techniques            2   1095    15
Unix Tips and Techniques            4   1095    15

6 rows selected
```

3. Select the course number and total capacity for each course. Show only those
   courses with a total capacity less than the average capacity of all sections.
   Arrange the list by course number then total capacity.

```sql
COURSE_NO   TOTAL_CAPACITY
---------   --------
10          15
144         15
```

4. Choose most ambitious students by showing the student ID for those students
   enrolled in the most sections. Arrange the list by student ID.

```sql
STUDENT_ID MOST_CLASSES
---------- ------------
124         4
214         4
```

5. Select the Student ID and section ID of enrolled students living in Zip Code
   11373. Arrange the list by Student ID then by Section ID. Order by student_id
   then section ID.

```sql
STUDENT_ID SECTION_ID
---------- ----------
122          87
153         144
179         116
218          90
252          99
252         101

6 rows selected
```


6. Display the course number and the course description of courses taught by
   Marilyn Frantzen. Arrange the list by description then course number.

```sql
COURSE_NO DESCRIPTION
--------- ------------------------------
132       Basics of Unix Admin
122       Intermediate Java Programming
145       Internet Protocols
120       Intro to Java Programming
 25       Intro to Programming
230       Intro to the Internet
125       Java Developer I
350       Java Developer II
135       Unix Tips and Techniques

9 rows selected
```

7. Show the first and last names of students who are not enrolled in any class.
   Arrange the list by last name then first name.

```sql
FIRST_NAME  LAST_NAME
----------  ---------
Jerry       Abdou
Carlos      Airall
Maria       Allende
Yvonne      Allende
John        Ancean
Craig       Anglin
Sarah       Annina
Oscar       Archer
...
John        Velie
Artie       Ward
Vera        Wetcel
Yvonne      Winnicki
Reeva       Yeroushalmi
Mei-Wah     Zopf

103 rows selected
```

8. Determine the name, course description, and section ID of the students who
   had the lowest Project (PJ) grade from all courses. Arrange the list by last
   name then first name then description.

```sql
FIRST_NAME  LAST_NAME       DESCRIPTION                     SECTION_ID
----------  ---------       ------------                    ----------
Beth        Satterfield     Unix Tips and Techniques        115
Sarah       Wilson          Intro to Information Systems     82
Tamara      Zapulla         Intermediate Java Programming   155
```

9. Select the sections that are full by comparing capacity to the number
   enrolled. Show the number enrolled, the section capacity and the section ID.
   Order by number enrolled, then section ID.

```sql
ENROLLED SECTION_ID CAPACITY
-------- ---------- --------
      12         99       12
      12        101       10
```

10. Show the course number, description and cost of the cheapest courses.
    Arrange the list by course number then description.

```sql
COURSE_NO DESCRIPTION                   COST
--------- ----------------------------- ---------
      135 Unix Tips and Techniques      1095
      230 Intro to the Internet         1095
      240 Intro to the BASIC Language   1095

3 Rows
```