## Subqueries

```sql
SELECT
    MAX(num_orders) AS max_num_orders
FROM
    (SELECT
        custno,
        COUNT(*) AS num_orders
    FROM
        ordertbl
    GROUP BY
        custno
    ORDER BY
        custno);
```

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
WHERE custno IN
(SELECT custno
 FROM ordertbl
 GROUP BY custno
 HAVING COUNT(*) =
    (SELECT MAX(num_orders)
     FROM
        (SELECT custno, COUNT(*) AS num_orders
         FROM ordertbl
         GROUP BY custno
         ORDER BY custno)))
```

```sql
SELECT
    custfirstname,
    custlastname,
    custbal
FROM
    customer
WHERE custbal >
    (SELECT
        MIN(custbal)
    FROM customer);
```
