def main():
    while True:
        print()
        val = input("Enter a non-negative base-10 integer (or 'q' to quit): ")
        if val.lower() == 'q':
            break
        try:
            val = int(val)
        except ValueError as err:
            print_error()
            continue
        if val < 0:
            print_error()
            continue
        print()
        print_results(val)


def print_error():
    print("Input must be a non-negative integer.")


def print_results(n):
    print(n, "in base 2:", convert_to_base(2, n))
    print(n, "in base 8:", convert_to_base(8, n))
    print(n, "in base 16:", convert_to_base(16, n))


def convert_to_base(base, value):
    digits = []
    while True:
        digits.append(str(value % base))
        if value < base:
            break
        value //= base
    digits.reverse()
    if base == 16:
        digits = convert_to_hex(digits)
    return ''.join(digits)


def convert_to_hex(digits):
    for i in range(len(digits)):
        if digits[i] == '10':
            digits[i] = 'A'
        elif digits[i] == '11':
            digits[i] = 'B'
        elif digits[i] == '12':
            digits[i] = 'C'
        elif digits[i] == '13':
            digits[i] = 'D'
        elif digits[i] == '14':
            digits[i] = 'E'
        elif digits[i] == '15':
            digits[i] = 'F'
    return digits


if __name__ == "__main__":
    main()
