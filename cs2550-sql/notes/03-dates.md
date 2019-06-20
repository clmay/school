\## Date formatting

### `to_char()` & `to_date()`

`to_char()` converts data (such as date data types) into character. `to_date()`
formats date data to match a given date format character string.

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
