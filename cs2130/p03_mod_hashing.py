def main():
    choice = ""
    while not choice == "n":
        s = input("Please enter a sentence: ").lower()
        s = strip(s)
        h = mod_hash(sentence_sum(s))
        print("The hash of the sentence you entered is: ", h)
        choice = input("Would you like to continue? (y/n): ").lower()


def strip(sentence):
    result = ""
    for c in sentence:
        if c == " ":
            result += c
        elif c.isalpha():
            result += c
    return result


def sentence_sum(sentence):
    sum = 0
    for c in sentence:
        if c == " ":
            sum += 31
        else:
            sum += ord(c) - 96
    return sum


def mod_hash(num):
    return num % 31


if __name__ == "__main__":
    main()
