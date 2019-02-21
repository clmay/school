## More inner joins

```sql
-- 1. List the first and last name and phone numbers of employees of customers in Seattle
--
SELECT DISTINCT
    empfirstname,
    emplastname,
    empphone
FROM
    customer   c
    INNER JOIN ordertbl   o ON c.custno = o.custno
    INNER JOIN employee   e ON e.empno = o.empno
WHERE
    custcity = 'Seattle';

-- 2. List the order number, the order date, the  customer number, the customer state and the
-- shipping state in which the customer state differs from the shipping state.

SELECT
    o.ordno,
    o.orddate,
    c.custno,
    c.custstate,
    o.ordstate
FROM
    customer   c
    INNER JOIN ordertbl   o ON c.custno = o.custno
WHERE
    c.custstate != o.ordstate;

-- 3. For Colorado customers, compute the number of orders placed during January 2007.
-- The result should include the customer number, last name, and number of orders placed.

SELECT
    c.custno,
    c.custlastname,
    COUNT(*) AS num_orders
FROM
    customer   c
    INNER JOIN ordertbl   o ON c.custno = o.custno
WHERE
    c.custstate = 'CO'
    AND TO_CHAR(orddate, 'Mon YYYY') = 'Jan 2007'
GROUP BY
    c.custno,
    c.custlastname;

-- 4. List the product manufacturer, product name and number of times that the product has
-- appeared on an order for products that have appeared on an order at least 5 times.  

SELECT
    p.prodname,
    p.prodmfg,
    COUNT(*) AS times_ordered
FROM
    product   p
    INNER JOIN ordline   l ON p.prodno = l.prodno
GROUP BY
    p.prodname,
    p.prodmfg
HAVING
    COUNT(*) >= 5;

-- 5. List the name of each employee along with the name of their supervisor.

SELECT
    e.empfirstname,
    e.emplastname,
    s.empfirstname   AS supfirstname,
    s.emplastname    AS suplastname
FROM
    employee   e
    INNER JOIN employee   s ON e.supempno = s.empno;

-- 6. List each customer city and state and the number of customers in that city and state.
-- Order the list such that the city with the highest number of customers is at the top of the list

SELECT
    custcity,
    custstate,
    COUNT(*) AS numcustomers
FROM
    customer
GROUP BY
    custcity,
    custstate
ORDER BY
    numcustomers DESC;

-- 7. For each employee with a commission rate greater than or equal to 0.05, compute the
-- number of orders taken in January 2007. The result should include the employee number,
-- employee last name, and number of orders taken.

SELECT
    e.empno,
    e.emplastname,
    COUNT(*) AS numorders
FROM
    employee   e
    INNER JOIN ordertbl   o ON e.empno = o.empno
WHERE
    e.empcommrate >= 0.05
    AND TO_CHAR(orddate, 'Mon YYYY') = 'Jan 2007'
GROUP BY
    e.empno,
    e.emplastname;

-- 8. List each customer name and total number of items ordered for customers with zero balances.

SELECT
    c.custfirstname,
    c.custlastname,
    SUM(l.qty) AS total_items_ordered
FROM
    customer   c
    INNER JOIN ordertbl   o ON o.custno = c.custno
    INNER JOIN ordline    l ON l.ordno = o.ordno
WHERE
    c.custbal = 0.00
GROUP BY
    c.custfirstname,
    c.custlastname;

-- 9. List the names of customers that have purchased Battery Back-up Systems.

SELECT
    c.custfirstname,
    c.custlastname
FROM
    customer   c
    INNER JOIN ordertbl   o ON o.custno = c.custno
    INNER JOIN ordline    l ON l.ordno = o.ordno
    INNER JOIN product    p ON p.prodno = l.prodno
WHERE
    p.prodname = 'Battery Back-up System';

-- 10. List each employee name and their January 2007 commission. The commission is the
-- product of the monthly order amount times the commission rate.

SELECT
    e.empfirstname,
    e.emplastname,
    TO_CHAR(e.empcommrate * SUM(l.qty * p.prodprice), '99.99') AS "Jan 2007 Commission"
FROM
    employee   e
    INNER JOIN ordertbl   o ON o.empno = e.empno
    INNER JOIN ordline    l ON l.ordno = o.ordno
    INNER JOIN product    p ON p.prodno = l.prodno
WHERE
    TO_CHAR(o.orddate, 'Mon YYYY') = 'Jan 2007'
GROUP BY
    e.empfirstname,
    e.emplastname,
    e.empcommrate;
```
