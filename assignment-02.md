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

1. Provide an alphabetical list of the full name and phone number of all
students that work for 'New York Culture' (the full name should be displayed as
one column with an alias of 'Student Name')

    ```
    Student Name           PHONE
    ---------------------- ------------
    Cathy Austin           718-555-5555
    George Eakheit         201-555-5555
    Mark Miller            718-555-5555
    Jeannette Smagler      718-555-5555
    ```

2. Provide a list of student employers that are corporations (have "Co." in
their name). List each employer only once and arrange the list alphabetical
order.

    ```
    EMPLOYER                                        
    -----------

    Albert Hildegard Co.                              

    Burke & Co.                                       

    Crane Co.                                         

    Finle & Co.                                       

    G.C.Osnos Co.
    ```

3. Provide an alphabetical list of students in area code 617. List student name
in the format <last name (all upper case)>, <first initial>. ( Example, `SMITH, J.`)
followed by the phone number.

    ```
    Student Name                  PHONE        
    ----------------------------- -------

    BOREMMANN, W.                 617-555-5555   

    KOCKA, G.                     617-555-5555   

    LA BLANK, T.                  617-555-5555   

    NORMAN, J.                    617-555-5555   

    SETHI, J.                     617-555-5555
    ```

4. List the name and address of all instructors without a ZIP code.

    ```
    Instructor              STREET_ADDRESS
    -----------------------------------------

    Irene Willig            415 West 101st   
    ```

5. Provide a list of ZIP codes for Jackson Heights, NY.  Sort on ZIP.

    ```
     ZIP
    -----

    11370

    11372

    11572
    ```

6. List the course number and location for all courses taught in a classroom
that ends in the number 10.  Arrange the list on location.

    ```
    COURSE_NO LOCATION                                        
    --------- ----------

          124 H310                                               

           20 L210                                              

           25 L210                                              

           25 L210                                              

          204 L210                                               

          122 L210                                              

          145 L210                                              

          124 L210                                              

          120 L210                                               

           20 L210                                              

          140 L210                                              

     11 rows selected
    ```

7. Provide a list containing full state name, state abbreviation and city from
the ZIP code table for MA, OH, PR and WV. (You'll need to use the CASE
expression). MA is Massachusetts, OH is Ohio, PR is Puerto Rico and WV is West
Virginia.  Sort by state.

    ```
    State Name           STATE     CITY                   
    -------------        -----     ----

        Massachusetts    MA       Tufts Univ. Bedford      

        Massachusetts    MA       Sandwich                 

        Massachusetts    MA       Weymouth                 

        Massachusetts    MA       North Adams              

        Massachusetts    MA       Dorchester               

        Ohio             OH       Columbus                  

        Puerto Rico      PR       Santurce                 

        West Virginia    WV       Georgetown               

    8 rows selected
    ```

8. Create a listing containing single column address (salutation, first name,
last name, address, ZIP) as 'Instructor Address' for each instructor in ZIP
code 10015. Sort the list in alphabetical order.

    ```
    Instructor Address
    ----------------------------------------

    Hon. Rick Chow 56 10th Avenue 10015                                                                                 

    Mr. Fernand Hanks 100 East 87th 10015                                                                              

    Ms. Anita Morris 34 Maiden Lane 10015
    ```

9. List the student id and quiz score for each student in section 152. List the
scores from highest to lowest.

    ```
    STUDENT_ID NUMERIC_GRADE
    ---------- -------------

           207            88

           207            87

           138            85

           138            84

           206            77

           144            76

           206            76

           144            75

     8 rows selected
    ```

10. List the student ID, final exam (FI) score and exam result ('PASS' or
'FAIL') for all students in section 156. A final score of 85 or higher is
required to pass. Arrange the list by student ID.

    ```
    STUDENT_ID       NUMERIC_GRADE    RESULT
    ----------       -------------    ------

        113             83             Fail
        114             84             Fail
        165             85             Pass
        170             76             Fail
        173             77             Fail
        174             88             Pass
        214             99             Pass
        215             90             Pass

    8 Rows
    ```
