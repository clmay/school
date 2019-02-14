```sql
SELECT
    s.first_name,
    s.last_name,
    e.section_id,
    g.grade_type_code,
    MAX(g.numeric_grade)
FROM
    student      s
    INNER JOIN enrollment   e ON e.student_id = s.student_id
    INNER JOIN grade        g ON g.student_id = e.student_id
                          AND g.section_id = e.section_id
WHERE
    s.first_name = 'Julius'
    AND s.last_name = 'Kwong'
GROUP BY
    s.first_name,
    s.last_name,
    e.section_id,
    g.grade_type_code
HAVING
    MAX(g.numeric_grade) >= 85
ORDER BY
    g.grade_type_code;
```

```sql
SELECT
    emp.empfirstname,
    emp.emplastname,
    sup.empfirstname   AS supfirstname,
    sup.emplastname    AS suplastname
FROM
    employee   emp
    INNER JOIN employee   sup ON emp.supempno = sup.empno;
```
