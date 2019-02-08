## Date formatting

- Two digit day with all-caps abbreviated month, four digit year

  ```sql
  SELECT
      prodname,
      to_char(prodnextshipdate, 'DD MON YYYY') AS ship_date
  FROM
      product;
  ```

- Full month name, two digit day, four digit year

  ```sql
  SELECT
      prodname,
      to_char(prodnextshipdate, 'Month DD YYYY') AS ship_date
  FROM
      product;
  ```

- Add day of the week and day's place in weekly cycle

  ```sql
  SELECT
      prodname,
      to_char(prodnextshipdate, 'Month DD YYYY Day D') AS ship_date
  FROM
      product;
  ```

- 24-hour clock with minutes, AM/PM

  ```sql
  SELECT
      prodname,
      to_char(prodnextshipdate, 'Mon DD YYYY HH24:MI AM') AS ship_date
  FROM
      product;
  ```

- With seconds and the number of the week in the year

  ```sql
  SELECT
      prodname,
      to_char(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date
  FROM
      product;
  ```

### In `WHERE` statements

- When matching on a value, the formatting for the search term much match the
  formatting for the data being searched on

  ```sql
  SELECT
    prodname,
    TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date
  FROM
    product
  WHERE
    TO_CHAR(prodnextshipdate, 'DD MM YY') = '22 01 07';
  ```

- Note that when matching on dates, the time is implicitly checked even if not
  included explicitly in the date format. If the implicit times do not match,
  there will be no results.

  ```sql
  SELECT
      prodname,
      TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date
  FROM
      product
  WHERE
      TO_CHAR(prodnextshipdate, 'DD MM YY HH:MI') = '22 01 07 12:01';
  ```

  - If using comparison operators, convert the value being compared to a date
    value first.

  ```sql
  SELECT
    prodname,
    TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date
  FROM
    product
  WHERE
    prodnextshipdate <= to_date('31 01 07', 'DD MM YY');
  ```

- Values can also be added to other values on the fly.

  ```sql
  SELECT
      prodname,
      TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date,
      prodnextshipdate +3 as arrival_date
  FROM
      product
  WHERE
      prodnextshipdate <= to_date('31 01 07', 'DD MM YY');
  ```

  ```sql
  SELECT
    prodname,
    TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date,
    add_months(prodnextshipdate, 1) as next_order_date
  FROM
    product
  WHERE
    prodnextshipdate <= to_date('31 01 07', 'DD MM YY');
  ```

  ```sql
  SELECT
    prodname,
    TO_CHAR(prodnextshipdate, 'Mon DD YYYY HH:MI:SS AM W') AS ship_date,
    add_months(prodnextshipdate, 12) as next_year
  FROM
    product
  WHERE
    prodnextshipdate <= to_date('31 01 07', 'DD MM YY');
  ```

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

## Review

### `to_char()` & `to_date()`

`to_char()` converts data (such as date data types) into character. `to_date()`
formats date data to match a given date format character string.

### `DUAL` table

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

## Aggregates

```sql
SELECT
    prodmfg,
    COUNT(*) AS num_products
FROM
    product
GROUP BY
    prodmfg
HAVING
    COUNT(*) = 1
ORDER BY
    prodmfg
;


SELECT
    prodname,
    COUNT(*) AS num_mfgs
FROM
    product
GROUP BY
    prodname
ORDER BY
    prodname
;
```
