def main():
    print()
    print("Result = ((c + ~d) * b) * ~(d + a * e)")
    print()
    print_table_header()
    for i in reversed(range(0, 2**5)):
        print_row(i)


def print_table_header():
    print("|  a  |  b  |  c  |  d  |  e  |  Result |")
    print("|-----|-----|-----|-----|-----|---------|")


def print_row(i):
    a, b, c, d, e = list_from_int(i)
    res = result(a, b, c, d, e)
    print(f'|  {a}  |  {b}  |  {c}  |  {d}  |  {e}  |    {res}    |')


def list_from_int(i):
    return map(int, list('{:05b}'.format(i)))


def result(a, b, c, d, e):
    return bool((c + (not d)) * b) * (not (d + a * e))


if __name__ == '__main__':
    main()
