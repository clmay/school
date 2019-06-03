def main():
    operator = ask_operator()
    negate_p = ask_if_negated("p")
    negate_q = ask_if_negated("q")

    print("Answer:\n")

    table = build_table(operator, negate_p, negate_q)
    print_table(table)


def ask_operator():
    while True:
        operator = input("Which operator? (AND/OR): ").lower()
        if not (operator == "and" or operator == "or"):
            print("Please enter a valid selection.")
        else:
            break
    return operator


def ask_if_negated(name):
    while True:
        is_negated = input("Negate " + name + "? (y/n): ").lower()
        if is_negated == "y":
            return True
        elif is_negated == "n":
            return False
        else:
            print("Please enter a valid selection.")


def expr(operator, negate_p1, negate_p2):
    prop = ""
    p1, p2 = "p", "q"
    if negate_p1 == True:
        p1 = "~p"
    if negate_p2 == True:
        p2 = "~q"
    if operator == "and":
        prop = p1 + "∧" + p2
    if operator == "or":
        prop = p1 + "∨" + p2
    return prop


def eval(operator, negate_p1, negate_p2, p1_value, p2_value):
    if negate_p1 == True:
        p1_value = -p1_value
    if negate_p2 == True:
        p2_value == -p2_value
    if operator == "and":
        if p1_value == True and p2_value == True:
            return "T"
        else:
            return "F"
    if operator == "or":
        if p1_value == False and p2_value == False:
            return "F"
        else:
            return "T"


def build_table(operator, negate_p1, negate_p2):
    prop = expr(operator, negate_p1, negate_p2)
    table = [
        ["p", "q", prop],
        ["T", "T", eval(operator, negate_p1, negate_p2, True, True)],
        ["T", "F", eval(operator, negate_p1, negate_p2, True, False)],
        ["F", "T", eval(operator, negate_p1, negate_p2, False, True)],
        ["F", "F", eval(operator, negate_p1, negate_p2, False, False)]
    ]
    return table


def print_table(rows):
    for row in rows:
        curr_row = ""
        for cell in row:
            curr_row += str(cell) + "\t"
        print(curr_row + "\n")


if __name__ == "__main__":
    main()
