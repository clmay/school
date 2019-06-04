# Chase May
# Lab 4: Creating Subnets
# CS 2705: Fundamentals of Networking


def main():
    for i in range(len(problems)):
        print("Problem " + str(i + 1) + ":\n")
        for j in range(len(problems)):
            if problems[j]["number"] == i + 1:
                print("\t" + str(problems[j]["number"]) + "." + str(problems[j]["part"]) + ". " + str(
                    problems[j]["type"]).capitalize() + ": " + str(solve_problem(problems[j])))
        print("\n")


def dec_to_bin(ip_address):
    octet_1, octet_2, octet_3, octet_4 = ip_address.split('.')
    octet_1 = bin(int(octet_1))[2:].zfill(8)
    octet_2 = bin(int(octet_2))[2:].zfill(8)
    octet_3 = bin(int(octet_3))[2:].zfill(8)
    octet_4 = bin(int(octet_4))[2:].zfill(8)
    bin_ip = str(octet_1) + '.' + str(octet_2) + '.' + \
        str(octet_3) + '.' + str(octet_4)
    return bin_ip


def bin_to_dec(ip_address):
    octet_1, octet_2, octet_3, octet_4 = ip_address.split('.')
    octet_1 = int(octet_1, 2)
    octet_2 = int(octet_2, 2)
    octet_3 = int(octet_3, 2)
    octet_4 = int(octet_4, 2)
    dec_ip = str(octet_1) + '.' + str(octet_2) + '.' + \
        str(octet_3) + '.' + str(octet_4)
    return dec_ip


def create_mask(number_of_bits):
    result = ""
    remaining = number_of_bits
    for i in range(4):
        for _ in range(8):
            if remaining > 0:
                result += "1"
                remaining -= 1
            else:
                result += "0"
        if i < 3:
            result += "."
    return result


def solve_problem(problem):
    result = ""
    if problem["type"] == "subnet mask":
        result = bin_to_dec(create_mask(problem["bits"]))
    return result


problems = [  # { number, type, problem_data ...}
    {"number": 1, "part": 1, "type": "subnet mask", "bits": 2},
    {"number": 1, "part": 2, "type": "subnet mask", "bits": 13},
    {"number": 1, "part": 3, "type": "subnet mask", "bits": 5},
    {"number": 1, "part": 4, "type": "subnet mask", "bits": 11},
    {"number": 1, "part": 5, "type": "subnet mask", "bits": 9},
    {"number": 1, "part": 6, "type": "subnet mask", "bits": 10},
    {"number": 1, "part": 7, "type": "subnet mask", "bits": 4},
    {"number": 1, "part": 8, "type": "subnet mask", "bits": 14},
    {"number": 1, "part": 9, "type": "subnet mask", "bits": 6},
    {"number": 1, "part": 10, "type": "subnet mask", "bits": 8},
    {"number": 1, "part": 11, "type": "subnet mask", "bits": 12},
]

if __name__ == "__main__":
    main()
