def main():
    while True:
        print()
        op = ask_op()
        negate_p = ask_negated('P')
        negate_q = ask_negated('Q')

        print()
        print_row('p', 'q', prop_to_str(op, negate_p, negate_q))
        print_table(op, negate_p, negate_q)


def ask_op():
    while True:
        op = input('Operator (AND or OR): ').upper()
        if op == 'Q':
            raise SystemExit
        elif not(op == 'AND' or op == 'OR'):
            print('Operator must be either "AND" or "OR".')
            print()
            continue
        else:
            break
    return op


def ask_negated(symbol):
    while True:
        value = input(f'Negate {symbol}? (Y/N): ').upper()
        if not(value == 'Y' or value == 'N'):
            print('Enter "Y" for yes, or "N" for no.')
            continue
        else:
            break
    return yes_no_to_bool(value)


def yes_no_to_bool(string):
    if string.upper() == 'Y':
        return True
    if string.upper() == 'N':
        return False


def print_row(p, q, comp):
    print(p, '\t', q, '\t', comp)


def prop_to_str(op, negate_p, negate_q):
    res = ''

    if negate_p:
        res += '~'
    res += 'p'

    if op == 'AND':
        res += ' A '
    if op == 'OR':
        res += ' V '

    if negate_q:
        res += '~'
    res += 'q'

    return res


def print_table(op, negate_p, negate_q):
    print_row('T', 'T', compute(op, True, True, negate_p, negate_q))
    print_row('T', 'F', compute(op, True, False, negate_p, negate_q))
    print_row('F', 'T', compute(op, False, True, negate_p, negate_q))
    print_row('F', 'F', compute(op, False, False, negate_p, negate_q))


def compute(op, p, q, negate_p, negate_q):
    if negate_p:
        p = not p
    if negate_q:
        q = not q
    if op == 'AND':
        return bool_to_str(p and q)
    if op == 'OR':
        return bool_to_str(p or q)


def bool_to_str(boolean):
    if boolean:
        return 'T'
    else:
        return 'F'


if __name__ == '__main__':
    main()
