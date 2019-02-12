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
