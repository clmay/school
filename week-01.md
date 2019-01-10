## Data

Data is stored in tables, which consist of rows of records with associated data.

`students`

| w_number | first_name | last_name | address | city | state | zip |
| --- | --- | --- | --- | --- | --- | -- |
| 00012345 | John | Smith | 221 B Baker St | Ogden | UT | 84404 |

`section`

| section_id | course_number | w_number |
| --- | --- | -- |
| 30767 | CS2550 | 00012345 |

`courses`

| course_number | course_title |
| --- | --- |
| CS2550 | Database Design & Application |

## Normalization

Goals:

- Reduce redundancy
- Prevent orphan records

Forms:

1. Unnormalized
1. First normal form (1NF)
1. Second NF (2NF)
1. Third NF (3NF / business normal form)
1. Boyce-Codd NF
1. Fourth NF
1. Fifth NF

### First normal form

Take unnormalized data and:

1. Deal with non-atomic data, *e.g.*:
    - Split `name` into `first_name`, `last_name`
    - Split `address` into `street_address`, `city`, `state`, `zip`
1. Make sure each row can stand on its own.
1. Identify primary key / values which uniquely identify each row, *e.g.* W# / course number.

*i.e.*, change this:

| w_number | first_name | last_name | course_number | days | time | room |
| --- | --- | --- | --- | --- | --- | --- |
| W12345678 | Chase | May | CS 1400 | MWF | 11:30–1:20 | TechEd 202S |
|  |  |  | CS 2250 | TTh | 8:30–10:20 | TechEd 109C |
|  |  |  | CS 2550 | TTh | 11:30–1:20 | TechEd 103D |

To this:

| w_number | first_name | last_name | course_number | days | time | room |
| --- | --- | --- | --- | --- | --- | --- |
| W12345678 | Chase | May | CS 1400 | MWF | 11:30–1:20 | TechEd 202S |
| W12345678 | Chase | May | CS 2250 | TTh | 8:30–10:20 | TechEd 109C |
| W12345678 | Chase | May | CS 2550 | TTh | 11:30–1:20 | TechEd 103D |

### Second normal form

Take data in 1NF and:

1. Identify partial dependencies (are there columns that rely on the entire PK
or only part of the PK)? *e.g.* Do `first_name` and `last_name` rely on *both*
the W# and the course number? No, `first_name` and `last_name` are both
determined by W# alone.

*i.e.*, split this:

| w_number (PK) | first_name | last_name | course_number (PK) | days | time | room |
| --- | --- | --- | --- | --- | --- | --- |
| W12345678 | Chase | May | CS 1400 | MWF | 11:30–1:20 | TechEd 202S |
| W12345678 | Chase | May | CS 2250 | TTh | 8:30–10:20 | TechEd 109C |
| W12345678 | Chase | May | CS 2550 | TTh | 11:30–1:20 | TechEd 103D |

Into these:

`Students`

| w_number (PK) | first_name | last_name |
| --- | --- | --- |
| W12345678 | Chase | May |

`Registrations`

| w_number (FK) | course_number (FK) |
| --- | --- |
| W12345678 | CS 1400 |
| W12345678 | CS 2250 |
| W12345678 | CS 2550 |

`Courses`

| course_number (PK) | days | time | room |
| --- | --- | --- | --- |
| CS 1400 | MWF | 11:30–1:20 | TechEd 202S |
| CS 2250 | TTh | 8:30–10:20 | TechEd 109C |
| CS 2550 | TTh | 11:30–1:20 | TechEd 103D |

### Third normal form

Take data in 2NF and:

1. Identify transitive dependencies (are there non-PK columns that depend on
other non-PK columns?). *e.g.* `city` and `state` depend on `zip`.

*i.e.*, turn this:

`Students`

| w_number (PK) | first_name | last_name | street_address | city | state | zip |
| --- | --- | --- | --- |--- | --- | --- |
| W12345678 | Chase | May | 221B Baker Street | Ogden | UT | 84401 |

Into this:

`Students`

| w_number (PK) | first_name | last_name | street_address | zip (FK) |
| --- | --- | --- | --- |--- | --- | --- |
| W12345678 | Chase | May | 221B Baker Street | 84401 |

`Cities`

| zip (PK) | city | state |
| --- | --- | --- |
| 84401 | Ogden | UT |
