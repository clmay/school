1. List the first name, last name and phone number for all students that
registered on 2/13/2007. Arrange the list in order of last name and first name.

    ```
    FIRST_NAME                LAST_NAME                 PHONE
    ------------------------- ------------------------- ---------------
    Jose                      Benitez                   201-555-5555
    Charles                   Caro                      203-555-5555
    John                      De Simone                 718-555-5555
    Rosemary                  Ellman                    201-555-5555
    Bill                      Engongoro                 718-555-5555
    Jean                      Griffith                  201-555-5555
    Lorraine                  Harty                     201-555-5555
    Jonathan                  Jaele                     718-555-5555
    Robin                     Kelly                     201-555-5555
    Radharam                  King                      718-555-5555
    George                    Korka                     718-555-5555
    Julius                    Kwong                     201-555-5555
    Thomas E.                 La Blank                  617-555-5555
    Evelyn                    Liggons                   718-555-5555
    Salewa                    Lindeman                  718-555-5555
    Vinnie                    Moon                      718-555-5555
    Shirley                   Murray                    718-555-5555
    Hedy                      Naso                      201-555-5555
    Virginia                  Ocampo                    201-555-5555
    Kate                      Page                      718-555-5555
    Benita                    Perkins                   718-555-5555
    Kevin                     Porch                     201-555-5555
    George                    Ross                      718-555-5555
    Adele                     Rothstein                 718-555-5555
    Paul                      Sikinger                  201-555-5555
    Ronald                    Tangaribuan               201-555-5555
    Sharon                    Thompson                  718-555-5555
    Florence                  Valamas                   718-555-5555
    Donna                     Walston                   201-555-5555
    29 rows selected
    ```

2. List course number, section ID and start date for all sections located in L509.
Arrange by start date.

    ```
    COURSE_NO SECTION_ID START_DATE_TIME
    --------- ---------- ---------------
         134        111  08-APR-07
         350         79   14-APR-07
         147         95   14-APR-07
         135        114   15-APR-07
         220         98   15-APR-07
         134        140   16-APR-07
         240        101   16-APR-07
         130        136   24-APR-07
         146        125   29-APR-07
         130        137   03-MAY-07
         120        149   04-MAY-07
         350        105   09-MAY-07
          25         89   15-MAY-07
         135        112   16-MAY-07
         132        138   21-MAY-07
         125        130   22-MAY-07
         120        148   24-MAY-07
         100        143   03-JUN-07
         132        139   09-JUN-07
         134        110   10-JUN-07
          20         83   11-JUN-07
          25         90   12-JUN-07
          25         92   13-JUN-07
         140        116   14-JUL-07
         125        131   24-JUL-07
    25 rows selected
    ```

3. List the course number, section ID, start date, instructor ID and capacity
for all courses with a start date in July 2007. Arrange the list by start date
and course number.

    ```
    COURSE_NO SECTION_ID START_DATE_TIME INSTRUCTOR_ID CAPACITY
    --------- ---------- --------------- ------------- --------
         124        126 14-JUL-07                 102       25
         130        107 14-JUL-07                 103       25
         142        119 14-JUL-07                 103       25
         145        123 14-JUL-07                 107       25
          25         85 14-JUL-07                 107       25
         140        116 14-JUL-07                 108       25
         330        104 14-JUL-07                 104       25
          20         81 24-JUL-07                 103       15
         100        142 24-JUL-07                 103       15
         120        147 24-JUL-07                 108       15
         122        153 24-JUL-07                 106       15
         124        127 24-JUL-07                 103       15
         125        131 24-JUL-07                 107       15
         146         94 24-JUL-07                 102       15

    14 rows selected
    ```

4. List Student ID, Section ID and final grade for all students who have a
final grade and enrolled in January 2007.

    ```
    (1 Row)
    STUDENT_ID SECTION_ID FINAL_GRADE
    ---------- ---------- -----------
      102       89         92
    ```

5. Create a query using the Oracle Dual Table that returns the date of the end
of the semester for courses that begin on January 11, 2016. The semester is 109
days long.

    ```
    (1 Row)
    SEMESTER_END_DATE
    -----------------
    29-APR-16
    ```

6. Provide a list of course numbers and locations for sections being taught in
the even numbered rooms located in building L.

    ```
    COURSE_NO LOCATION
    --------- --------------------------------------------------
          10 L214
          20 L210
          20 L214
          20 L210
          25 L210
          25 L214
          25 L210
         204 L210
         230 L500
         230 L214
         240 L214
         350 L214
         135 L214
         140 L210
         142 L214
         144 L214
         145 L214
         145 L210
         124 L214
         124 L210
         125 L214
         130 L214
         100 L214
         100 L500
         100 L214
         120 L206
         120 L210
         122 L210

    28 rows selected
    ```

7. Provide a list of Students in zip code 11368 that registered 3 or more days
after their student record was created.

    ```
    LAST_NAME                 FIRST_NAME
    ------------------------- -------------------------
    Lasseter                  Hazel
    Miller                    James
    Boyd                      Robert
    ```

8. Create a list of student names along with the number of years since they
registered (round to 2 decimal places) for those students from area code 212.
Sort the list on the number of years from highest to lowest. Note that your
years may not exactly match my numbers depending on when you ran your query
compared to when I ran mine.

    ```
    FIRST_NAME                LAST_NAME                 Years
    ------------------------- ------------------------- ------
    Sean                      Pineda                    9.04
    Paul                      Lefkowitz                 9.03
    Al                        Jamerncy                  9.02
    Barbara                   Robichaud                 9.01
    Pat                       Puetrino                  8.98
    ```

9. Create a list of starting times for all course sections. Eliminate duplicates.

    ```
    START
    -----
    09:30
    10:30
    11:30
    (3 Rows)
    ```

10. List the Student ID, Section ID and time enrolled for all students who
enrolled at 10:19am. Arrange the list by student ID

    ```
    STUDENT_ID SECTION_ID ENROLLTIME
    ---------- ---------- ----------
          140         94 10:19AM
          141        100 10:19AM
          142        143 10:19AM
          143         85 10:19AM
          144        152 10:19AM
          145        106 10:19AM
          146        147 10:19AM
          147        117 10:19AM
          147        120 10:19AM
          148        123 10:19AM
          149        147 10:19AM
          150         89 10:19AM
          151         89 10:19AM
          152         89 10:19AM
          153        144 10:19AM
          154         88 10:19AM
          156        147 10:19AM
          157        147 10:19AM
          158         84 10:19AM
          159         85 10:19AM

    20 rows selected
    ```
