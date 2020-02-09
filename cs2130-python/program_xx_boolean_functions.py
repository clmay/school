def main():
    num_vars = 5
    num_rows = 2**num_vars

    print("\n\nProposition to solve: (( c + ~d ) * b ) * ~( d + a * e )\n")
    print(".-----.-----.-----.-----.-----.-----------.")
    print("|  a  |  b  |  c  |  d  |  e  |  solution |  (header)")
    for i in range(0, num_rows):
        print("|-----+-----+-----+-----+-----+-----------|")
        row = [1, 1, 1, 1, 1]
        if i % 32 > 15:
            row[0] = 0
        if i % 16 > 7:
            row[1] = 0
        if i % 8 > 3:
            row[2] = 0
        if i % 4 > 1:
            row[3] = 0
        row[4] = (i + 1) % 2
        solution = solve(row)
        print("|  " + "  |  ".join(map(str, row)) + "  |     " +
              str(solution) + "     |  (row " + str(i + 1) + ")")
    print("'-----'-----'-----'-----'-----'-----------'")


def solve(val_list):
    a, b, c, d, e = val_list
    # ((c + ~d) * b) * ~(d + a * e)
    # == ((c or (not d)) and b) and not(d or (a and e))
    # == and(and(or(c, not(d)), b), not(or(d, and(a, e))))
    solution = conjunction(conjunction(disjunction(c, negation(d)), b), negation(
        disjunction(d, conjunction(a, e))))
    return solution


def conjunction(expr_1, expr_2):
    # AND
    if expr_1 == 1 and expr_2 == 1:
        return 1
    else:
        return 0


def disjunction(expr_1, expr_2):
    # OR
    if expr_1 == 0 and expr_2 == 0:
        return 0
    else:
        return 1


def negation(expr):
    # NOT
    if expr == 0:
        return 1
    else:
        return 0


if __name__ == "__main__":
    main()
