# Program 5 Test Cases

## Valid input

| Operator | Negate P? | Negate Q? | Output                   |
| -------- | --------- | --------- | ------------------------ |
| and      | no        | no        | p        q       p A q   |
|          |           |           | T        T       T       |
|          |           |           | T        F       F       |
|          |           |           | F        T       F       |
|          |           |           | F        F       F       |
| -------- | --------- | --------- | ------------------------ |
| and      | yes       | no        | p        q       ~p A q  |
|          |           |           | T        T       F       |
|          |           |           | T        F       F       |
|          |           |           | F        T       T       |
|          |           |           | F        F       F       |
| -------- | --------- | --------- | ------------------------ |
| and      | no        | yes       | p        q       p A ~q  |
|          |           |           | T        T       F       |
|          |           |           | T        F       T       |
|          |           |           | F        T       F       |
|          |           |           | F        F       F       |
| -------- | --------- | --------- | ------------------------ |
| and      | yes       | yes       | p        q       ~p A ~q |
|          |           |           | T        T       F       |
|          |           |           | T        F       F       |
|          |           |           | F        T       F       |
|          |           |           | F        F       T       |
| -------- | --------- | --------- | ------------------------ |
| or       | no        | no        | p        q       p A q   |
|          |           |           | T        T       T       |
|          |           |           | T        F       T       |
|          |           |           | F        T       T       |
|          |           |           | F        F       F       |
| -------- | --------- | --------- | ------------------------ |
| or       | yes       | no        | p        q       ~p A q  |
|          |           |           | T        T       T       |
|          |           |           | T        F       F       |
|          |           |           | F        T       T       |
|          |           |           | F        F       T       |
| -------- | --------- | --------- | ------------------------ |
| or       | no        | yes       | p        q       p A ~q  |
|          |           |           | T        T       T       |
|          |           |           | T        F       T       |
|          |           |           | F        T       F       |
|          |           |           | F        F       T       |
| -------- | --------- | --------- | ------------------------ |
| or       | yes       | yes       | p        q       ~p A ~q |
|          |           |           | T        T       F       |
|          |           |           | T        F       T       |
|          |           |           | F        T       T       |
|          |           |           | F        F       T       |
| -------- | --------- | --------- | ------------------------ |

## Invalid input

| Operator | Output                                 |
| -------- | -------------------------------------- |
| asdf     | Operator must be either "AND" or "OR". |
| 1234     | Operator must be either "AND" or "OR". |
| #$%^&*   | Operator must be either "AND" or "OR". |

| Negate P? | Output                            |
| --------- | --------------------------------- |
| asdf      | Enter "Y" for yes, or "N" for no. |
| 1234      | Enter "Y" for yes, or "N" for no. |
| #$%^&*    | Enter "Y" for yes, or "N" for no. |

| Negate Q? | Output                            |
| --------- | --------------------------------- |
| asdf      | Enter "Y" for yes, or "N" for no. |
| 1234      | Enter "Y" for yes, or "N" for no. |
| #$%^&*    | Enter "Y" for yes, or "N" for no. |
