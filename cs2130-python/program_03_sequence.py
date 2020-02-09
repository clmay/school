def main():
    res = ""
    for i in range(5):
        new = ""
        for j in range(i):
            new += "1"
        for j in range(i):
            new += "0"
        res = new + res
    binary = int(res, 2)
    formatted = "{0:b}".format(binary)
    print(formatted)


if __name__ == "__main__":
    main()
