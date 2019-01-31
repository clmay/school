# Week Two

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
