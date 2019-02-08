## Connecting to `athena` Windows Desktop server

Hostname: athena.cs.weber.edu:53243
Username: 'cs\' + W number
Password: Your Windows password

## Connecting to `titan` DB server

Connection name: CS 2550
Username: CS2550FirstLast
Password: "CS2550" + last 4 of W number

Hostname: titan.cs.weber.edu
Port: 1521 (default)
SID: titan

## Basic queries

```sql
SELECT
    *
FROM
    ordertbl
WHERE
    orddate BETWEEN '01-JAN-07' AND '31-JAN-07';

SELECT
    prodname
FROM
    product
WHERE
    prodnextshipdate IS NULL;

SELECT
    custfirstname,
    custlastname
FROM
    customer
WHERE
    custbal BETWEEN 200 AND 350;
```

## SQL functions

- `LOWER(field)`: Displays text data in all lowercase characters

- `UPPER(field)`: Displays text in all uppercase letters

- `INITCAP(field)`: Displays text with first letter capitalized

- `LPAD(field, width, '<fill_char>')`: Add left padding to data, of the given width, with a given character

- `RPAD(field, width, '<fill_char>')`: Add right padding to data, of the given width, with a given character

- `CASE`, *e.g.*:

  ```sql
  SELECT
      CASE
          WHEN custfirstname = 'Jim'  THEN
              'JAMES'
          WHEN custfirstname = 'Bob'  THEN
              'ROBERT'
          WHEN custfirstname = 'Mike' THEN
              'MICHAEL'
          ELSE
              custfirstname
      END AS custfirstname
  FROM
      customer;
  ```

- `SUBSTR(field, <start_index>, <num_chars>)`, *e.g.*:

  ```sql
  SELECT
      empphone
  FROM
      employee
  WHERE
      substr(empphone, 7, 3) = '556';
  ```
  yields this:
  ```
  (303) 556-4321
  (303) 556-9987
  (303) 556-9871
  ```
