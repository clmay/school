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


def convert_to_base(base, decimal):
    pass


if __name__ == "__main__":
    main()
