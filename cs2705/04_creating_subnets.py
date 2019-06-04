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
    if problem["type"] == "subnet_mask":
        result = bin_to_dec(create_mask(problem["bits"]))
    return result


problems = [  # { number, part, type, problem data ...}
    {"number": 1, "part": 1, "type": "subnet_mask", "bits": 2},     # Problem 1
    {"number": 1, "part": 2, "type": "subnet_mask", "bits": 13},
    {"number": 1, "part": 3, "type": "subnet_mask", "bits": 5},
    {"number": 1, "part": 4, "type": "subnet_mask", "bits": 11},
    {"number": 1, "part": 5, "type": "subnet_mask", "bits": 9},
    {"number": 1, "part": 6, "type": "subnet_mask", "bits": 10},
    {"number": 1, "part": 7, "type": "subnet_mask", "bits": 4},
    {"number": 1, "part": 8, "type": "subnet_mask", "bits": 14},
    {"number": 1, "part": 9, "type": "subnet_mask", "bits": 6},
    {"number": 1, "part": 10, "type": "subnet_mask", "bits": 8},
    {"number": 1, "part": 11, "type": "subnet_mask", "bits": 12},
    {"number": 2, "part": 1, "type": "network_address",             # Problem 2
        "ip_address": "132.8.150.67/22"},
    {"number": 2, "part": 2, "type": "broadcast_address",
        "ip_address": "132.8.150.67/22"},
    {"number": 2, "part": 3, "type": "num_hosts",
        "ip_address": "132.8.150.67/22"},
    {"number": 2, "part": 4, "type": "valid_host_range",
        "ip_address": "132.8.150.67/22"},
    {"number": 3, "part": 1, "type": "network_address",             # Problem 3
        "ip_address": "200.16.5.74/30"},
    {"number": 3, "part": 2, "type": "broadcast_address",
        "ip_address": "200.16.5.74/30"},
    {"number": 3, "part": 3, "type": "num_hosts",
        "ip_address": "200.16.5.74/30"},
    {"number": 3, "part": 4, "type": "valid_host_range",
        "ip_address": "200.16.5.74/30"},
    {"number": 4, "part": 1, "type": "network_address",             # Problem 4
        "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
    {"number": 4, "part": 2, "type": "broadcast_address",
        "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
    {"number": 4, "part": 3, "type": "num_hosts",
        "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
    {"number": 4, "part": 4, "type": "valid_host_range",
        "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
    {"number": 5, "part": 1, "type": "bits_in_mask",                # Problem 5
        "subnet_mask": "255.255.240.0"},
    {"number": 5, "part": 2, "type": "num_hosts",
        "subnet_mask": "255.255.240.0"},
    {"number": 6, "part": 1, "type": "bits_in_mask",                # Problem 6
        "subnet_mask": "255.255.255.192"},
    {"number": 6, "part": 2, "type": "num_hosts",
        "subnet_mask": "255.255.255.192"},
    {"number": 7, "part": 1, "type": "bits_in_mask",                # Problem 7
        "subnet_mask": "255.255.252.0"},
    {"number": 7, "part": 2, "type": "num_hosts",
        "subnet_mask": "255.255.252.0"},
    {"number": 8, "part": 1, "type": "bits_in_mask",                # Problem 8
        "subnet_mask": "255.255.255.248"},
    {"number": 8, "part": 2, "type": "num_hosts",
        "subnet_mask": "255.255.255.248"},

]

if __name__ == "__main__":
    main()
