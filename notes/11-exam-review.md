1. Inner join on subqueries

```sql
SELECT
    t1.custno,
    num_orders,
    num_employees
FROM
    ( -- Number of orders per customer
        SELECT
            custno,
            COUNT(*) AS num_orders
        FROM
            ordertbl
        GROUP BY
            custno
    ) t1
    INNER JOIN ( -- Number of employees who have helped a given customer
        SELECT
            COUNT(*) AS num_employees,
            custno
        FROM
            ordertbl
        GROUP BY
            custno
    ) t2 ON t1.custno = t2.custno;
```