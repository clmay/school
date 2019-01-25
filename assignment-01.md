Write a series of Oracle SQL query statements using the Student database which
consists of the schema defined in Appendix D of your text.

This assignment will be completed using Oracle. The CS Athena remote terminal
server has both SQLDeveloper and SQL*Plus installed and available for student use.

You can also connect to Oracle by Installing SQLDeveloper on your own computer.
General instructions for using SQL Developer are contained in Lab 2.3 of your
text.

1. Create a notepad text file named FirstNameLastNameCS2550SQL01.txt.

2. Put your name and assignment information at the top of the file.

3. Paste each of your SQL statements into the file, numbering each one.

4. Make sure that each SQL statement is terminated with a semi-colon. You will
not receive credit for the question if the semi-colon is missing.

N.B.: It is essential that your submitted queries are formatted as specified.

---

1. List the salutation and names (first and last name) of all instructors in
alphabetical order (last name then first name).

    ```
    SALUTATION FIRST_NAME                LAST_NAME

    ---------- ------------------------- -------------------------

        Hon        Rick                      Chow

        Dr         Marilyn                   Frantzen

        Mr         Fernand                   Hanks

        Mr         Charles                   Lowry

        Ms         Anita                     Morris

        Mr         Gary                      Pertez

        Ms         Nina                      Schorin

        Rev        Todd                      Smythe

        Ms         Irene                     Willig

        Mr         Tom                       Wojick

    10 rows selected
    ```

2. Provide a list of distinct locations that have been used to teach sections of
courses. Arrange the list in order of location.

    ```
    LOCATION

    --------------------------------------------------

        H310

        L206

        L210

        L211

        L214

        L500

        L507

        L509

        L511

        M200

        M311

        M500

    12 rows selected
    ```

3. List the first and last names of Instructors with a first name starting with
“T”. Sort them in alphabetical order.

    ```
    FIRST_NAME                LAST_NAME

    ------------------------- -------------------------

    Todd                      Smythe

    Tom                       Wojick
    ```

4. List the phone number, full name (as one column) and employer for all
students with a last name of “Torres”.  Sort by Employer

    ```
    PHONE           FULLNAME                           EMPLOYER

    --------------- ------------------------------------------

    718-555-5555    E.A. Torres                 Electronic Engineers

    718-555-5555    Rafael A. Torres            Handler,Danas Realty

    718-555-5555    Angela Torres               New York Pop
    ```

5. List the course number and course description of all courses that have a
prerequisite of course 350. Arrange in order of course number.

    ```
    COURSE_NO DESCRIPTION

    --------- --------------------------------------------------

          430 Java Developer III

          450 DB Programming with Java
    ```

6. List the course number, description and cost for all 200 level courses
(200-299) costing less than $1100.  Arrange by course number.

    ```
    COURSE_NO DESCRIPTION                                             COST

    --------- -------------------------------------------------- ---------

          230 Intro to the Internet                                   1095

          240 Intro to the BASIC Language                             1095
    ```

7. List the course number, section id and location for all 100 level courses
(100 through 199) that are taught in room L214 or L509. Order by location and
course number.

    ```
    COURSE_NO SECTION_ID LOCATION

    --------- ---------- --------------------------------------------------

          100        141 L214

          100        145 L214

          124        128 L214

          125        132 L214

          130        135 L214

          135        113 L214

          142        120 L214

          ...          ...

          135        114 L509

          135        112 L509

          140        116 L509

          146        125 L509

          147         95 L509

    26 rows selected
    ```

8. List the course number, section id and capacity for classes with a capacity
of 12 or 15 (use the IN clause). Order the list by course number and section id.

    ```
    COURSE_NO SECTION_ID CAPACITY

    --------- ---------- --------

           10         80       15

           20         81       15

           20         82       15

           25         86       15

           25         88       15

          100        142       15

          100        144       15

          120        147       15

          ...        ...      ...

          146         94       15

          230         99       12

          230        100       15

          240        102       15

          350        106       15

     28 rows selected
    ```

9. List the student id and grade for all of the midterm exam scores (MT) in
section 141. Arrange the list by student id and grade.

    ```
    STUDENT_ID NUMERIC_GRADE

    ---------- -------------

           130            90

           175            91

           195            92

           211            83

           237            84

           238            85

     6 rows selected
    ```

10. List the course number and description for all 300 level courses that have a
prerequisite, arranged on course description.

    ```
    COURSE_NO DESCRIPTION

    --------- --------------------------------------------------

          350 Java Developer II

          330 Network Administration
    ```
