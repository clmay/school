# Program 4 Test Cases

## Valid input

| Input value | Base 2                | Base 8  | Base 16 |
| ----------- | --------------------- | ------- | ------- |
| 0           | 0                     | 0       | 0       |
| 1           | 1                     | 1       | 1       |
| 2           | 10                    | 2       | 2       |
| 3           | 11                    | 3       | 3       |
| 4           | 100                   | 4       | 4       |
| 8           | 1000                  | 10      | 8       |
| 9           | 1001                  | 11      | 9       |
| 10          | 1010                  | 12      | A       |
| 11          | 1011                  | 13      | B       |
| 12          | 1100                  | 14      | C       |
| 13          | 1101                  | 15      | D       |
| 14          | 1110                  | 16      | E       |
| 15          | 1111                  | 17      | F       |
| 16          | 10000                 | 20      | 10      |
| 17          | 10001                 | 21      | 11      |
| 31          | 11111                 | 37      | 1F      |
| 32          | 100000                | 40      | 20      |
| 255         | 11111111              | 377     | FF      |
| 1048575     | 11111111111111111111  | 3777777 | FFFFF   |
| 1048576     | 100000000000000000000 | 4000000 | 100000  |

## Invalid input

| Input value                | Output                                |
| -------------------------- | ------------------------------------- |
| abc                        | Input must be a non-negative integer. |
| asdfjkl;qwertyui           | Input must be a non-negative integer. |
| 1.1                        | Input must be a non-negative integer. |
| 987..654..321              | Input must be a non-negative integer. |
| -100000000000              | Input must be a non-negative integer. |
| 123-456-7890               | Input must be a non-negative integer. |
| `~!@#$^&*(){}[]\;':"<>?,./ | Input must be a non-negative integer. |

## Sentinel values

| Input | Expected behavior |
| ----- | ----------------- |
| `q`   | [Program exits]   |
| `Q`   | [Program exits]   |

