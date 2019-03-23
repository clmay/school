Unions eliminate duplicate rows in the result:

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
UNION
SELECT
    empfirstname,
    emplastname
FROM
    employee;
```

To show all results (including duplicate rows):

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
UNION ALL
SELECT
    empfirstname,
    emplastname
FROM
    employee;
```

But which rows come from which tables?

```sql
SELECT
    custfirstname AS first_name,
    custlastname AS last_name,
    'Customer'
FROM
    customer
UNION ALL
SELECT
    empfirstname,
    emplastname,
    'Employee'
FROM
    employee
```

Number of columns and data types of each column must match across all SELECT
statements in a UNION.


`MINUS` eliminates rows.

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
MINUS
SELECT
    empfirstname,
    emplastname
FROM
    employee;
```

`INTERSECT` shows rows that are only in both tables.

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
INTERSECT
SELECT
    empfirstname,
    emplastname
FROM
    employee;
```

`LEFT JOIN`

```sql
SELECT
    i.instructor_id,
    NVL(TO_CHAR(s.instructor_id, 'none'))
FROM
    instructor i
    LEFT OUTER JOIN section s ON s.instructor_id = i.instructor_id
```