## "Dual" table

`DUAL` is a table automatically created by Oracle Database (containing a variety
of constant values?)

```sql
SELECT
    to_char(sysdate, 'Mon DD YYYY HH:MI:SS AM') as current_time
FROM dual;
```

```sql
SELECT
    to_char(sysdate, 'Mon DD YYYY HH:MI:SS AM') as current_time,
    to_char(sysdate + 1, 'Mon DD YYYY HH:MI:SS AM') as tomorrow
FROM dual;
```

Times can be positive or negative.

```sql
SELECT
    to_date('Dec 25, 2015', 'Mon DD, YYYY') - sysdate as selected_time
FROM dual;
```

```sql
SELECT
    SYSDATE AS "Date"
FROM
    dual;
```

```sql
SELECT
    to_char(SYSDATE, 'Mon DD, YYYY') AS "Date"
FROM
    dual;
```

### Examples

```sql
SELECT
    ordname,
    ordcity,
    TO_CHAR(orddate, 'Mon DD, YYYY') AS orddate
FROM
    ordertbl
WHERE
    TO_CHAR(orddate, 'Mon DD, YYYY') = 'Jan 23, 2007';
```

```sql
SELECT
    ordno,
    orddate
FROM
    ordertbl
WHERE
    TO_CHAR(orddate, 'Mon') = 'Feb'
    AND ordstate = 'WA'
ORDER BY
    ordno;
```

```sql
SELECT
    prodno,
    prodname,
    prodnextshipdate
FROM
    product
WHERE
    TO_CHAR(prodnextshipdate, 'Mon') = 'Feb';
```

```sql
SELECT
    ordno
FROM
    ordertbl
WHERE
    TO_CHAR(orddate, 'DD') = '11'
ORDER BY
    ordno;
```

```sql
SELECT
    ordno AS "Order number",
    orddate AS "Order date",
    orddate + 5 AS "Arrival date"
FROM
    ordertbl
WHERE
    TO_CHAR(orddate, 'Mon YYYY') = 'Feb 2007'
ORDER BY
    "Arrival date";
```

```sql
SELECT
    prodname,
    prodprice
FROM
    product
WHERE
    prodprice NOT LIKE '%.%'
ORDER BY
    prodprice;
```

```sql
SELECT DISTINCT
    TO_CHAR(prodnextshipdate, 'DD') AS day_of_month
FROM
    product
WHERE
    prodnextshipdate IS NOT NULL
ORDER BY
    day_of_month;
```

```sql
SELECT
    ordno,
    TO_CHAR((months_between(TO_DATE('Dec 31 2018', 'Mon DD YYYY'), orddate) / 12), '99.99') AS date_difference
FROM
    ordertbl
ORDER BY
    date_difference;
```
