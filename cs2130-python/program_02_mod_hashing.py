import sys
from functools import reduce


def main():
    print()
    while True:
        s = input("Enter a sentence: ").lower()
        if s == '':
            continue
        try:
            clean(s)
            print("The hash of the sentence you entered is: ", mod_hash(s))
        except ValueError as val_err:
            print(val_err)
        choice = input("Type 'q' to quit, or continue...\n").lower()
        if choice == 'q':
            break


def clean(sentence):
    for c in sentence:
        if c == ' ' or c.isalpha():
            continue
        else:
            raise ValueError("Input may only include letters and spaces")


def mod_hash(sentence):
    spaces = filter(lambda c: c == ' ', sentence)
    spaces_total = 31 * len(list(spaces))

    alphas = filter(lambda c: c.isalpha(), sentence)
    alpha_vals = map(lambda c: ord(c) - 96, alphas)
    alphas_total = sum(list(alpha_vals))

    return (spaces_total + alphas_total) % 31


if __name__ == "__main__":
    main()
