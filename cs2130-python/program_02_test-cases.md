# Program 2 Test Cases

| #   | Input description                | Example value              | Expected output                             |
| --- | -------------------------------- | -------------------------- | ------------------------------------------- |
| 1   | One word                         | owl                        | 19                                          |
| 2   | Any number of spaces             |                            | 0                                           |
| 3   | A word with any number of spaces | `owl   `                   | 19 (same as the word alone)                 |
| 5   | Any number of words              | an owl roosts in the woods | 24                                          |
| 6   | Numeric characters               | 1234567890                 | 'Input may only include letters and spaces' |
| 7   | Non-alphanumeric characters      | !@#\$%^&\*()               | 'Input may only include letters and spaces' |
| 8   | Non-alphanumeric characters      | `-=~-=[]\{};':",./<>?\|\   |                                             |
