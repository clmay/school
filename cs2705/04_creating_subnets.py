# Chase May
# Lab 4: Creating Subnets
# CS 2705: Fundamentals of Networking

import ipaddress
import math

# Attempt 2 ("Do it by the book"-ish)

print("Problem 1:\n")

pnum = 1  # the number of the first problem for the next problem set

ip_addresses = [
    ("2 bits", "252.0.0.0/2"),  # Problem 1.1
    ("13 bits", "252.0.0.0/13"),  # Problem 1.2
    ("5 bits", "252.0.0.0/5"),  # Problem 1.3
    ("11 bits", "252.0.0.0/11"),  # Problem 1.4
    ("9 bits", "252.0.0.0/9"),  # Problem 1.5
    ("10 bits", "252.0.0.0/10"),  # Problem 1.6
    ("4 bits", "252.0.0.0/4"),  # Problem 1.7
    ("14 bits", "252.0.0.0/14"),  # Problem 1.8
    ("6 bits", "252.0.0.0/6"),  # Problem 1.9
    ("8 bits", "252.0.0.0/8"),  # Problem 1.10
    ("12 bits", "252.0.0.0/12")  # Problem 1.11
]

for i in range(len(ip_addresses)):
    my_ip_interface = ipaddress.ip_interface(ip_addresses[i][1])
    print("\t1.{0}\t{1}: \t{2}".format(
        i + pnum, ip_addresses[i][0], my_ip_interface.netmask))
print()

pnum = 2  # through 4

ip_addresses = [
    "132.8.150.67/22",  # Problem 2
    "200.16.5.74/30",  # Problem 3
    "166.0.13.8/255.255.252.0"  # Problem 4
]

for i in range(len(ip_addresses)):
    print("Problem {}:\n".format(i + pnum))
    my_ip_interface = ipaddress.ip_interface(ip_addresses[i])
    my_ip_network = my_ip_interface.network
    print("\t{0}.1 Network address:\t{1}".format(
        i + pnum, my_ip_network.network_address))
    print("\t{0}.2 Broadcast address:\t{1}".format(
        i + pnum, my_ip_network.broadcast_address))
    print("\t{0}.3 Number of hosts:\t{1}".format(
        i + pnum, len(list(my_ip_network.hosts()))))
    print("\t{0}.4 Valid host range:\t{1} to {2}".format(
        i + pnum, my_ip_network.network_address + 1, my_ip_network.broadcast_address - 1))
    print()

pnum = 5  # through 8

ip_addresses = [
    "252.0.0.0/255.255.240.0",
    "252.0.0.0/255.255.255.192",
    "252.0.0.0/255.255.252.0",
    "252.0.0.0/255.255.255.248"
]

for i in range(len(ip_addresses)):
    print("Problem {}:\n".format(i + pnum))
    my_ip_interface = ipaddress.ip_interface(ip_addresses[i])
    my_ip_network = my_ip_interface.network
    print("\t{0}.1 Bits in subnet mask: {1}".format(
        i + pnum, my_ip_network.prefixlen))
    print("\t{0}.2 Number of hosts: {1}".format(
        i + pnum, len(list((my_ip_network.hosts())))))
    print()

pnum = 9  # last problem

print("Problem {}:\n".format(pnum))

my_ip_interface = ipaddress.ip_interface("252.0.0.0/16")
my_ip_network = my_ip_interface.network

number_of_networks = 56
bits_borrowed = math.ceil(math.log(number_of_networks, 2))
ip_subnet_len = my_ip_network.prefixlen + bits_borrowed

print("\t Subnet mask length: {}".format(ip_subnet_len))
print("\t Subnets created: {}".format(len(list(ipaddress.ip_network(
    my_ip_network).subnets(prefixlen_diff=(bits_borrowed))))))

new_ip_address = "252.0.0.0/" + str(ip_subnet_len)
my_ip_interface = ipaddress.ip_interface(new_ip_address)
print("\t Subnet mask: {}".format(my_ip_interface.netmask))

print()

# # Attempt 1

# # def main():
# #     print()
# #     for i in range(1, 9):
# #         print("Problem " + str(i) + ":\n")
# #         for problem in problems:
# #             if problem["number"] == i:
# #                 print("\t" + str(problem["number"]) +
# #                       "." + str(problem["part"]) +
# #                       ". " + str(problem["type"]).capitalize() +
# #                       ": " + str(solve_problem(problem)))
# #         print()
# #     print("Problem 9: \n")
# #     print("\t9.1. Subnet mask: " + str(solve_problem_9()))
# #     print()


# # def dec_to_bin(ip_address):
# #     octet_1, octet_2, octet_3, octet_4 = ip_address.split(".")
# #     octet_1 = bin(int(octet_1))[2:].zfill(8)
# #     octet_2 = bin(int(octet_2))[2:].zfill(8)
# #     octet_3 = bin(int(octet_3))[2:].zfill(8)
# #     octet_4 = bin(int(octet_4))[2:].zfill(8)
# #     bin_ip = str(octet_1) + "." + str(octet_2) + "." + \
# #         str(octet_3) + "." + str(octet_4)
# #     return bin_ip


# # def bin_to_dec(ip_address):
# #     octet_1, octet_2, octet_3, octet_4 = ip_address.split(".")
# #     octet_1 = int(octet_1, 2)
# #     octet_2 = int(octet_2, 2)
# #     octet_3 = int(octet_3, 2)
# #     octet_4 = int(octet_4, 2)
# #     dec_ip = str(octet_1) + "." + str(octet_2) + "." + \
# #         str(octet_3) + "." + str(octet_4)
# #     return dec_ip


# # def create_mask(number_of_bits):
# #     result = ""
# #     remaining = number_of_bits
# #     for i in range(4):
# #         for _ in range(8):
# #             if remaining > 0:
# #                 result += "1"
# #                 remaining -= 1
# #             else:
# #                 result += "0"
# #         if i < 3:
# #             result += "."
# #     return result


# # def network_address(ip_address):
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     network_address = ipaddress.ip_network(network).network_address
# #     return network_address


# # def broadcast_address(ip_address):
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     broadcast_address = ipaddress.ip_network(network).broadcast_address
# #     return broadcast_address


# # def num_hosts(ip_address):
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     num_hosts = ipaddress.ip_network(network).num_addresses - 2
# #     return num_hosts


# # def host_range(ip_address):
# #     host_range = "NOT IMPLEMENTED!"
# #     return host_range


# # def first_address(ip_address):
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     first_usable_address = next(ipaddress.ip_network(network).hosts())
# #     return first_usable_address


# # def last_address(ip_address):
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     last_usable_address = next(
# #         reversed(list(ipaddress.ip_network(network).hosts())))
# #     return last_usable_address


# # def bits_in_mask(subnet_mask):  # TODO
# #     bin_mask = dec_to_bin(subnet_mask)
# #     return bin_mask


# # # def calc_subnet_prefix_length(network_data):
# # #     (_, num_subnets, _) = network_data
# # #     for i in range(32, 0, -1):
# # #         if num_subnets >= 2 ** i:
# # #             return i + 1


# # def max_subnets(network_data):
# #     (ip_address, _, subnet_prefix) = network_data
# #     interface = ipaddress.ip_interface(ip_address)
# #     network = interface.network
# #     max_num_subnets = sum(1 for i in ipaddress.ip_network(
# #         network).subnets(prefixlen_diff=subnet_prefix))
# #     return max_num_subnets


# # def addr_per_subnet(network_data):
# #     (ip_address, _, subnet_prefix) = network_data
# #     address_and_mask = ip_address.split("/")
# #     ip_base = str(address_and_mask[0])
# #     original_mask = int(address_and_mask[1])
# #     new_mask = str(original_mask + subnet_prefix)
# #     addresses_per_subnet = num_hosts((ip_base + "/" + new_mask, _, _))
# #     return addresses_per_subnet


# # def num_hosts_subnet(subnet_mask):
# #     result = "NOT IMPLEMENTED!"
# #     return result


# # def solve_problem_9():  # TODO
# #     result = "NOT IMPLEMENTED!"
# #     return result


# # def solve_problem(problem):
# #     solution = ""
# #     if problem["type"] == "subnet mask":
# #         bits = problem["bits"]
# #         solution = bin_to_dec(create_mask(bits))
# #     if problem["type"] == "network address":
# #         ip_address = problem["ip_address"]
# #         solution = network_address(ip_address, )
# #     if problem["type"] == "broadcast address":
# #         ip_address = problem["ip_address"]
# #         solution = broadcast_address(ip_address)
# #     if problem["type"] == "number of hosts":
# #         if problem["number"] < 4:
# #             ip_address = problem["ip_address"]
# #             subnet_mask = problem["subnet_mask"]
# #             solution = num_hosts(ip_address)
# #         elif problem["number"] > 3:
# #             subnet_mask = problem["subnet_mask"]
# #             solution = num_hosts_subnet(subnet_mask)
# #     if problem["type"] == "host range":
# #         ip_address = problem["ip_address"]
# #         subnet_mask = problem["subnet_mask"]
# #         solution = host_range(ip_address)
# #     if problem["type"] == "number of bits":
# #         subnet_mask = problem["subnet_mask"]
# #         solution = bits_in_mask(subnet_mask)
# #     return solution


# # problems = [  # { number, part, type, problem data ...}
# #     {"number": 1, "part": 1, "type": "subnet mask", "bits": 2},     # Problem 1
# #     {"number": 1, "part": 2, "type": "subnet mask", "bits": 13},
# #     {"number": 1, "part": 3, "type": "subnet mask", "bits": 5},
# #     {"number": 1, "part": 4, "type": "subnet mask", "bits": 11},
# #     {"number": 1, "part": 5, "type": "subnet mask", "bits": 9},
# #     {"number": 1, "part": 6, "type": "subnet mask", "bits": 10},
# #     {"number": 1, "part": 7, "type": "subnet mask", "bits": 4},
# #     {"number": 1, "part": 8, "type": "subnet mask", "bits": 14},
# #     {"number": 1, "part": 9, "type": "subnet mask", "bits": 6},
# #     {"number": 1, "part": 10, "type": "subnet mask", "bits": 8},
# #     {"number": 1, "part": 11, "type": "subnet mask", "bits": 12},
# #     {"number": 2, "part": 1, "type": "network address",             # Problem 2
# #         "ip_address": "132.8.150.67/22"},
# #     {"number": 2, "part": 2, "type": "broadcast address",
# #         "ip_address": "132.8.150.67/22"},
# #     {"number": 2, "part": 3, "type": "number of hosts",
# #         "ip_address": "132.8.150.67/22", "subnet_mask": ""},
# #     {"number": 2, "part": 4, "type": "host range",
# #         "ip_address": "132.8.150.67/22", "subnet_mask": ""},
# #     {"number": 3, "part": 1, "type": "network address",             # Problem 3
# #         "ip_address": "200.16.5.74/30"},
# #     {"number": 3, "part": 2, "type": "broadcast address",
# #         "ip_address": "200.16.5.74/30"},
# #     {"number": 3, "part": 3, "type": "number of hosts",
# #         "ip_address": "200.16.5.74/30"},
# #     {"number": 3, "part": 4, "type": "host range",
# #         "ip_address": "200.16.5.74/30", "subnet_mask": ""},
# #     {"number": 4, "part": 1, "type": "network address",             # Problem 4
# #         "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
# #     {"number": 4, "part": 2, "type": "broadcast address",
# #         "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
# #     {"number": 4, "part": 3, "type": "number of hosts",
# #         "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
# #     {"number": 4, "part": 4, "type": "host range",
# #         "ip_address": "166.0.13.8", "subnet_mask": "255.255.252.0"},
# #     {"number": 5, "part": 1, "type": "number of bits",                    # Problem 5
# #         "subnet_mask": "255.255.240.0"},
# #     {"number": 5, "part": 2, "type": "number of hosts",
# #         "subnet_mask": "255.255.240.0"},
# #     {"number": 6, "part": 1, "type": "number of bits",                    # Problem 6
# #         "subnet_mask": "255.255.255.192"},
# #     {"number": 6, "part": 2, "type": "number of hosts",
# #         "subnet_mask": "255.255.255.192"},
# #     {"number": 7, "part": 1, "type": "number of bits",                    # Problem 7
# #         "subnet_mask": "255.255.252.0"},
# #     {"number": 7, "part": 2, "type": "number of hosts",
# #         "subnet_mask": "255.255.252.0"},
# #     {"number": 8, "part": 1, "type": "number of bits",                    # Problem 8
# #         "subnet_mask": "255.255.255.248"},
# #     {"number": 8, "part": 2, "type": "number of hosts",
# #         "subnet_mask": "255.255.255.248"},
# # ]

# # if __name__ == "__main__":
# #     main()
