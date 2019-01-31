# Week Four

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
