-- 1. Provide an alphabetical list of the full name and phone number of all
-- students that work for 'New York Culture' (the full name should be displayed as
-- one column with an alias of 'Student Name').
SELECT
    first_name
    || ' '
    || last_name,
    phone
FROM
    student
WHERE
    employer = 'New York Culture';

-- 2. Provide a list of student employers that are corporations (have "Co." in
-- their name). List each employer only once and arrange the list alphabetical
-- order.

SELECT DISTINCT
    employer
FROM
    student
WHERE
    employer LIKE '%Co.%'
ORDER BY
    employer;

-- 3. Provide an alphabetical list of students in area code 617. List student name
-- in the format <last name (all upper case)>, <first initial>. ( Example, `SMITH, J.`)
-- followed by the phone number.

SELECT
    upper(last_name)
    || ', '
    || substr(first_name, 1, 1),
    phone
FROM
    student
WHERE
    substr(phone, 1, 3) = '617'
ORDER BY
    last_name;

-- 4. List the name and address of all instructors without a ZIP code.

SELECT
    first_name
    || ' '
    || last_name,
    street_address
FROM
    instructor
WHERE
    zip IS NULL;

-- 5. Provide a list of ZIP codes for Jackson Heights, NY. Sort on ZIP.

SELECT
    zip
FROM
    zipcode
WHERE
    city = 'Jackson Heights'
    AND state = 'NY';

-- 6. List the course number and location for all courses taught in a classroom
-- that ends in the number 10.  Arrange the list on location.

SELECT
    course_no,
    location
FROM
    section
WHERE
    substr(location, - 2, 2) = '10'
ORDER BY
    location;

-- 7. Provide a list containing full state name, state abbreviation and city from
-- the ZIP code table for MA, OH, PR and WV. (You'll need to use the CASE
-- expression). MA is Massachusetts, OH is Ohio, PR is Puerto Rico and WV is West
-- Virginia.  Sort by state.

SELECT
    CASE
        WHEN state = 'MA' THEN
            'Massachusetts'
        WHEN state = 'OH' THEN
            'Ohio'
        WHEN state = 'PR' THEN
            'Puerto Rico'
        WHEN state = 'WV' THEN
            'West Virginia'
        ELSE
            state
    END AS state_name,
    state,
    city
FROM
    zipcode
WHERE
    state IN (
        'MA',
        'OH',
        'PR',
        'WV'
    )
ORDER BY
    state;

-- 8. Create a listing containing single column address (salutation, first name,
-- last name, address, ZIP) as 'Instructor Address' for each instructor in ZIP
-- code 10015. Sort the list in alphabetical order.

SELECT
    salutation
    || '. '
    || first_name
    || ' '
    || last_name
    || ' '
    || street_address
    || ' '
    || zip as "Instructor Address"
FROM
    instructor
WHERE
    zip = 10015
ORDER BY
    salutation,
    first_name,
    last_name,
    street_address,
    zip;

-- 9. List the student id and quiz score for each student in section 152. List the
-- scores from highest to lowest.

SELECT
    student_id,
    numeric_grade
FROM
    grade
WHERE
    grade_type_code = 'QZ'
    AND section_id = 152
ORDER BY
    numeric_grade DESC;

-- 10. List the student ID, final exam (FI) score and exam result ('PASS' or
-- 'FAIL') for all students in section 156. A final score of 85 or higher is
-- required to pass. Arrange the list by student ID.



-- FIXME: Don't forget to correct line spacing on Problem 1.
