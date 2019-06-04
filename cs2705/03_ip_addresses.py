# Chase May
# Lab 3: IP Addresses
# CS 2705: Fundamentals of Networking

import ipaddress


def main():
    for i in range(len(problems)):
        print(problems[i] + "\n")
        for type in problem_types[i]:
            print("\t" + type.capitalize() + ": " +
                  str(solve_problem(type, problem_data[i])) + "\n")


def solve_problem(problem_type, problem_data):
    solution = ""
    if problem_type == "network address":
        solution = calc_network_address(problem_data)
    if problem_type == "first usable address":
        solution = calc_first_usable_address(problem_data)
    if problem_type == "total number of addresses":
        solution = calc_total_num_addresses(problem_data)
    if problem_type == "number of usable addresses":
        solution = calc_num_usable_addresses(problem_data)
    if problem_type == "broadcast address":
        solution = calc_broadcast_address(problem_data)
    if problem_type == "last usable address":
        solution = calc_last_usable_address(problem_data)
    if problem_type == "subnet prefix length":
        solution = calc_subnet_prefix_length(problem_data)
    if problem_type == "max number of subnets":
        solution = calc_max_num_subnets(problem_data)
    if problem_type == "addresses per subnet":
        solution = calc_addresses_per_subnet(problem_data)
    return solution


def calc_network_address(network_data):
    (ip_address, _, _) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    network_address = ipaddress.ip_network(network).network_address
    return network_address


def calc_first_usable_address(network_data):
    (ip_address, _, _) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    first_usable_address = next(ipaddress.ip_network(network).hosts())
    # the above is the same as:
    # first_usable_address = calc_network_address(network_data) + 1
    # but the uncommented code is equally fast, and more illustrative
    return first_usable_address


def calc_total_num_addresses(network_data):
    (ip_address, _, _) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    total_num_addresses = ipaddress.ip_network(network).num_addresses
    return total_num_addresses


def calc_num_usable_addresses(network_data):
    # (ip_address, _, _) = network_data
    # interface = ipaddress.ip_interface(ip_address)
    # network = interface.network
    # num_usable_addresses = sum(1 for i in ipaddress.ip_network(network).hosts())
    # the above is the same as:
    num_usable_addresses = calc_total_num_addresses(network_data) - 2
    # but the uncommented code is significantly faster (if less illustrative)
    return num_usable_addresses


def calc_broadcast_address(network_data):
    (ip_address, _, _) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    broadcast_address = ipaddress.ip_network(network).broadcast_address
    return broadcast_address


def calc_last_usable_address(network_data):
    (ip_address, _, _) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    last_usable_address = next(
        reversed(list(ipaddress.ip_network(network).hosts())))
    # the above is the same as:
    # last_usable_address = calc_broadcast_address(network_data) - 1
    # but the uncommented code is equally fast, and more illustrative
    return last_usable_address


def calc_subnet_prefix_length(network_data):
    (_, num_subnets, _) = network_data
    for i in range(32, 0, -1):
        if num_subnets >= 2 ** i:
            return i + 1


def calc_max_num_subnets(network_data):
    (ip_address, _, subnet_prefix) = network_data
    interface = ipaddress.ip_interface(ip_address)
    network = interface.network
    max_num_subnets = sum(1 for i in ipaddress.ip_network(
        network).subnets(prefixlen_diff=subnet_prefix))
    return max_num_subnets


def calc_addresses_per_subnet(network_data):
    (ip_address, _, subnet_prefix) = network_data
    address_and_mask = ip_address.split("/")
    ip_base = str(address_and_mask[0])
    original_mask = int(address_and_mask[1])
    new_mask = str(original_mask + subnet_prefix)
    addresses_per_subnet = calc_total_num_addresses(
        (ip_base + "/" + new_mask, _, _))
    return addresses_per_subnet


problems = [
    "1. What is the first address of a block of classless addresses if one of\n   the addresses is 192.168.2.76/28?",
    # solve for network address && first usable address
    "2. What is the first address of a block of classless addresses if one of\n   the addresses is 192.168.2.76/9?",
    # solve for network address && first usable address
    "3. What is the first address of a block of classless addresses if one of\n   the addresses is 192.168.2.137/27?",
    # solve for network address && first usable address
    "4. Find the number of addresses in a block of classless addresses if one\n   of the addresses is 101.10.2.8/15.",
    # solve for total number of addresses && number of usable addresses
    "5. Find the number of addresses in a block of classless addresses if one\n   of the addresses is 101.10.2.8/29.",
    # solve for total number of addresses && number of usable addresses
    "6. What is the last address of a block of classless addresses if one of\n   the addresses is 192.168.2.137/27?",
    # solve for broadcast address && last usable address
    "7. What is the last address of a block of classless addresses if one of\n   the addresses is 110.10.2.55/30?",
    # solve for broadcast address && last usable address
    "8. An organization is granted a block; one address is 110.10.10.64/20. The\n   organization needs 10 subnets. What is the subnet prefix length?",
    # solve for subnet prefix length
    "9. An organization is granted a block; one address is 110.10.10.64/25. If\n   the subnet prefix length is /28, what is the maximum number of subnets\n   and how many addresses in each subnet?",
    # solve for maximum number of subnets && number of addresses per subnet
    "10. An organization is granted a block of classless addresses with one of\n    the addresses: 156.78.51.24/25. How many addresses are granted?",
    # solve for number of addresses granted
    "11. An organization is granted a block of classless addresses with one of\n    the addresses: 156.78.51.24/30. How many addresses are granted?",
    # solve for number of addresses granted
    "12. An organization is granted a block of classless addresses with one of\n    the addresses: 166.25.132.0/3. How many addresses are granted?"
    # solve for number of addresses granted
]

problem_types = [
    ["network address", "first usable address"],  # Problem 1
    ["network address", "first usable address"],  # Problem 2
    ["network address", "first usable address"],  # Problem 3
    ["total number of addresses", "number of usable addresses"],  # Problem 4
    ["total number of addresses", "number of usable addresses"],  # Problem 5
    ["broadcast address", "last usable address"],  # Problem 6
    ["broadcast address", "last usable address"],  # Problem 7
    ["subnet prefix length"],  # Problem 8
    ["max number of subnets", "addresses per subnet"],  # Problem 9
    ["total number of addresses", "number of usable addresses"],  # Problem 10
    ["total number of addresses", "number of usable addresses"],  # Problem 11
    ["total number of addresses", "number of usable addresses"]  # Problem 12
]

# list of n-tuples: (IP address, number of subnetworks, subnet prefix length)
problem_data = [
    ("192.168.2.76/28", None, None),  # Problem 1
    ("192.168.2.76/9", None, None),  # Problem 2
    ("192.168.2.137/27", None, None),  # Problem 3
    ("101.10.2.8/15", None, None),  # Problem 4
    ("101.10.2.8/29", None, None),  # Problem 5
    ("192.168.2.137/27", None, None),  # Problem 6
    ("110.10.2.55/30", None, None),  # Problem 7
    ("110.10.10.64/20", 10, None),  # Problem 8
    ("110.10.10.64/25", None, 3),  # Problem 9
    ("156.78.51.24/25", None, None),  # Problem 10
    ("156.78.51.24/30", None, None),  # Problem 11
    ("166.25.132.0/3", None, None)  # Problem 12
]

if __name__ == "__main__":
    main()
