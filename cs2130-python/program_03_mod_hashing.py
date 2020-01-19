def main():
    choice = ""
    while not choice == "q":
        s = input("\nPlease enter a sentence: ")
        h = mod_hash(sum_chars(s))
        print("The hash of the sentence you entered is: ", h)
        choice = input("Press any key to continue, Q to exit: ").lower()


def clean(sentence):
    result = ""
    for c in sentence.lower():
        if c == " ":
            result += c
        elif c.isalpha():
            result += c
    return result


def sum_chars(sentence):
    sum = 0
    for c in clean(sentence):
        if c == " ":
            sum += 31
        else:
            sum += ord(c) - 96
    return sum


def mod_hash(num):
    return num % 31


if __name__ == "__main__":
    main()
