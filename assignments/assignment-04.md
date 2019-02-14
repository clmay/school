1. Create a query that returns the average cost for all courses. (Round to two
places).

```
Average Cost
------------
1198.45

(1 Row)
```

2. Create a query that returns the total number of Students that registered
during February 2007. Alias the column as "February_Registrations".

```
February_Registrations
----------------------
217

(1 Row)
```

3. Create a query that returns the average, highest and lowest final exam scores
for Section 147.

```
AVERAGE    HIGHEST    LOWEST
---------  --------   --------
86.25      99         76

(1 Row)
```

4. List the city, state and number of zipcodes for all cities with more than two
zipcodes. Arrange by state and city.

```
City                  STATE     ZIPCODES
-------               ------    --------
Stamford              CT          4
Clifton               NJ          3
Jersey City           NJ          4
Newark                NJ          4
Astoria               NY          3
Brooklyn              NY         36
Flushing              NY          4
Jackson Heights       NY          3
Jamaica               NY          5
New York              NY         11

(10 Rows)
```

5. Provide a list of Sections and the number of students enrolled in each
section for students who enrolled on 2/21/2007. Sort from highest to lowest on
the number of students enrolled.

```
SECTION_ID    ENROLLED
----------    --------
101            8
 99            8
105            3
153            3
126            3
 92            2
151            2
145            1
125            1
148            1
116            1
 91            1
100            1
 95            1

(14 Rows)
```

6. Create a query listing the student ID, Section ID and Average Grade for all
students in Section 86. Sort your list on the student ID and display all of the
average grades with 4 decimal places.

```
STUDENT_ID  SECTION_ID   AVERAGEGRADE
----------  ----------   ------------
102         86           89.1818
108         86           85.6364
211         86           85.7273
212         86           84.0000
217         86           88.6364
230         86           88.7273

(6 Rows)
```

7. Create a query to determine the number of sections in which student ID 250 is
enrolled. Your output should contain the student ID and the number of sections
enrolled.

```
STUDENT_ID    SECTIONS
----------    --------
250                  3

(1 Row)
```

8. List the section ID and lowest quiz score for all sections that has the low
score greater than a B (greater than 80). Arrange by section id.

```
SECTION_ID   LOWSCORE
---------- ----------
85           82
94           83
95           82
96           91
100          83
104          82
108          90
109          91
112          82
119          82
123          87
125          91
126          82
130          90
140          82
146          82

(16 rows)
```

9. List the names of Employers having more than 5 student employees. Your output
should contain the employer name and the number of student employees. Arrange
the output on the number of employees from lowest to highest.

```
EMPLOYER                  EMPLOYEES
------------------------- ---------
Crane Co.                      6
New York Pop                    8
Amer.Legal Systems             10
Electronic Engineers           15

(4 Rows)
```

10. List the section ID, number of participation grades and lowest participation
grade for all sections with more than 15 participation grades. Arrange by
section id.

```
SECTION_ID    PARTICIPATION_GRADES    LOWEST_GRADE
82                   24              73
88                   60              70
133                  36              70
137                  24              75
144                  24              72
155                  60              72

(6 Rows)
```
