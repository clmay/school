SELECT salutation, first_name, last_name
  FROM instructor
    ORDER BY last_name, first_name
;

SELECT DISTINCT location
  FROM section
    ORDER BY location
;

SELECT first_name, last_name
  FROM instructor
    WHERE first_name LIKE 'T%'
    ORDER BY last_name, first_name
;

SELECT phone, first_name||' '||last_name, employer
  FROM student
    WHERE last_name = 'Torres'
    ORDER BY employer
;
