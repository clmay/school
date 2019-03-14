1. Example using sub-query in the WHERE statement

```sql
SELECT
    custfirstname,
    custlastname,
    custbal
FROM
    customer
WHERE
    custbal = (
        SELECT
            MAX(custbal)
        FROM
            customer
    );
```

2. Example using sub-query in the FROM statement

```sql
SELECT
    MAX(num_orders)
FROM
    (
        SELECT
            custno,
            COUNT(*) AS num_orders
        FROM
            ordertbl
        GROUP BY
            custno
        ORDER BY
            custno
    );
```

3. And sub-query in a HAVING clause

```sql
SELECT
    custno,
    COUNT(*) AS num_orders
FROM
    ordertbl
GROUP BY
    custno
HAVING
    COUNT(*) = (
        SELECT
            MAX(num_orders)
        FROM
            (
                SELECT
                    custno,
                    COUNT(*) AS num_orders
                FROM
                    ordertbl
                GROUP BY
                    custno
                ORDER BY
                    custno
            )
    );
```

4. And sub-query in IN clause
   This is also example of three nested sub-queries

```sql
SELECT
    custfirstname,
    custlastname
FROM
    customer
WHERE
    custno IN (
        SELECT
            custno
        FROM
            ordertbl
        GROUP BY
            custno
        HAVING
            COUNT(*) = (
                SELECT
                    MAX(num_orders)
                FROM
                    (
                        SELECT
                            custno,
                            COUNT(*) AS num_orders
                        FROM
                            ordertbl
                        GROUP BY
                            custno
                        ORDER BY
                            custno
                    )
            )
    );
```

5. Show names of Customers with higher than average balance

```sql
SELECT
    custfirstname,
    custlastname,
    custbal
FROM
    customer
WHERE
    custbal >= (
        SELECT
            AVG(custbal) AS avgbal
        FROM
            customer
    );
```

6. Show names of Customers with less than highest balance

```sql
SELECT
    custfirstname,
    custlastname,
    custbal
FROM
    customer
WHERE
    custbal < (
        SELECT
            MAX(custbal) AS avgbal
        FROM
            customer
    );
```

7. Show names of Customers with larger than min balance

```sql
SELECT
    custfirstname,
    custlastname,
    custbal
FROM
    customer
WHERE
    custbal > (
        SELECT
            MIN(custbal) AS avgbal
        FROM
            customer
    );
```

8. We use IN instead of = when there can be more than one employee

```sql
SELECT
    empfirstname,
    emplastname
FROM
    employee
WHERE
    empno IN (
        SELECT
            empno
        FROM
            ordertbl
        GROUP BY
            empno
        HAVING
            COUNT(*) = (
                SELECT
                    MAX(num_orders)
                FROM
                    (
                        SELECT
                            empno,
                            COUNT(*) AS num_orders
                        FROM
                            ordertbl
                        WHERE
                            empno IS NOT NULL
                        GROUP BY
                            empno
                    )
            )
    );
```

9. List the names (first and last) of employees who have never sold a color monitor.

```sql
SELECT
    e.empfirstname,
    e.emplastname
FROM
    employee e
WHERE
    e.empno NOT IN (
        SELECT
            o.empno
        FROM
            ordertbl   o
            INNER JOIN ordline    ol ON ol.ordno = o.ordno
            INNER JOIN product    p ON p.prodno = ol.prodno
        WHERE
            p.prodname LiKE '%Color Monitor'
            AND o.empno IS NOT NULL
    )
ORDER BY
    e.emplastname,
    e.empfirstname;
```

10. List the names of employees that had at least one order in both Jan and Feb of 2007

```sql
SELECT
    e.empfirstname,
    e.emplastname
FROM
    employee e
WHERE
    e.empno IN (
        SELECT
            o.empno
        FROM
            ordertbl o
        WHERE
            TO_CHAR(o.orddate, 'MON YYYY') = 'JAN 2007'
            AND o.empno IS NOT NULL
    )
    AND e.empno IN (
        SELECT
            o.empno
        FROM
            ordertbl o
        WHERE
            TO_CHAR(o.orddate, 'MON YYYY') = 'FEB 2007'
            AND o.empno IS NOT NULL
    );
```

11. List the name and balance of customers with highest balance

```sql
SELECT
    c.custfirstname,
    c.custlastname,
    c.custbal
FROM
    customer c
WHERE
    c.custbal = (
        SELECT
            MAX(c.custbal)
        FROM
            customer c
    );
```

12. List the name of the city and number of customers for the city with the greatest number of customers

```sql
SELECT
    c.custcity,
    COUNT(*) AS num_customers
FROM
    customer c
GROUP BY
    c.custcity
HAVING
    COUNT(*) = (
        SELECT
            MAX(num_customers)
        FROM
            (
                SELECT
                    c.custcity,
                    COUNT(*) AS num_customers
                FROM
                    customer c
                GROUP BY
                    c.custcity
            )
    );
```

13. List the name of the city that received the highest number of shipments in Feb 2007

```sql
SELECT
    o.ordcity,
    COUNT(*) AS num_shipments
FROM
    product    p
    INNER JOIN ordline    ol ON ol.prodno = p.prodno
    INNER JOIN ordertbl   o ON o.ordno = ol.ordno
WHERE
    p.prodnextshipdate IS NOT NULL
    AND TO_CHAR(p.prodnextshipdate, 'MON YYYY') = 'FEB 2007'
GROUP BY
    o.ordcity
HAVING
    COUNT(*) = (
        SELECT
            MAX(num_shipments)
        FROM
            (
                SELECT
                    o.ordcity,
                    COUNT(*) AS num_shipments
                FROM
                    product    p
                    INNER JOIN ordline    ol ON ol.prodno = p.prodno
                    INNER JOIN ordertbl   o ON o.ordno = ol.ordno
                WHERE
                    p.prodnextshipdate IS NOT NULL
                    AND TO_CHAR(p.prodnextshipdate, 'MON YYYY') = 'FEB 2007'
                GROUP BY
                    o.ordcity
            )
    );
```

14. List the average number of products sold per order.

```sql
SELECT
    AVG(total_ordered) AS average_numofproducts
FROM
    (
        SELECT
            ol.ordno,
            SUM(ol.qty) AS total_ordered
        FROM
            ordline ol
        GROUP BY
            ol.ordno
    );
```

15. List the names of customers who has shipments to someone other than themselves. Show Cust name and Ord Name as one field

```sql
SELECT
    customername,
    ordname
FROM
    (
        SELECT
            custfirstname
            || ' '
            || custlastname AS customername,
            o.ordname
        FROM
            customer   c
            INNER JOIN ordertbl   o ON c.custno = o.custno
    )
WHERE
    customername != ordname;
```

16. List the names of employees with the above average commission rate

```sql
SELECT
    empfirstname,
    e.emplastname
FROM
    employee e
WHERE
    empcommrate > (
        SELECT
            AVG(e.empcommrate)
        FROM
            employee e
    );
```

17. List the product name and price for the product with the highest total Jan 2007 dollar sales.

```sql
SELECT
    p.prodname,
    SUM(p.prodprice * ol.qty) AS total
FROM
    product    p
    INNER JOIN ordline    ol ON ol.prodno = p.prodno
    INNER JOIN ordertbl   o ON o.ordno = ol.ordno
WHERE
    TO_CHAR(o.orddate, 'MON YYYY') = 'JAN 2007'
GROUP BY
    p.prodname
HAVING
    SUM(p.prodprice * ol.qty) = (
        SELECT
            MAX(total)
        FROM
            (
                SELECT
                    p.prodname,
                    SUM(p.prodprice * ol.qty) AS total
                FROM
                    product    p
                    INNER JOIN ordline    ol ON ol.prodno = p.prodno
                    INNER JOIN ordertbl   o ON o.ordno = ol.ordno
                WHERE
                    TO_CHAR(o.orddate, 'MON YYYY') = 'JAN 2007'
                GROUP BY
                    p.prodname
            )
    );
```

18. List the names of employees that have never sold a Connex product

```sql
SELECT
    e.empfirstname,
    e.emplastname
FROM
    employee e
WHERE
    e.empno NOT IN (
        SELECT
            o.empno
        FROM
            ordertbl   o
            INNER JOIN ordline    ol ON ol.ordno = o.ordno
            INNER JOIN product    p ON p.prodno = ol.prodno
        WHERE
            p.prodmfg = 'Connex'
            AND o.empno IS NOT NULL
    );