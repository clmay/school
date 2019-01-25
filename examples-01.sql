-- 1. List the first name, last name, city and state for all Customers.

-- 2. List the first name, last name and phone of all Employees.

-- 3. List the first name, last name and balance of Customers in Denver.

-- 4. List the product name for all products costing more than $150.

-- 5. List the name and phone number for all employees in area code 303.

-- 6. List all order lines with a quantity greater than 3.

-- 7. List the order name for all orders in Seattle.

-- 8. List the order number and order date for all orders placed in January 2007.
SELECT
    *
FROM
    ordertbl
WHERE
    orddate BETWEEN '01-JAN-07' AND '31-JAN-07';

-- 9. List the products without a next ship date.

SELECT
    prodname
FROM
    product
WHERE
    prodnextshipdate IS NULL;

-- 10. List the names of customers with balances between $200 and $350.

SELECT
    custfirstname,
    custlastname
FROM
    customer
WHERE
    custbal BETWEEN 200 AND 350;
