# Chase May
# Lab 2: IP Addresses - Decimal <-> Binary
# CS 2705: Fundamentals of Networking

def dec_to_bin(ip_address):
    octet_1, octet_2, octet_3, octet_4 = ip_address.split('.')
    octet_1 = bin(int(octet_1))[2:].zfill(8)
    octet_2 = bin(int(octet_2))[2:].zfill(8)
    octet_3 = bin(int(octet_3))[2:].zfill(8)
    octet_4 = bin(int(octet_4))[2:].zfill(8)
    bin_ip = str(octet_1) + "." + str(octet_2) + "." + str(octet_3) + "." + str(octet_4)
    return bin_ip

def bin_to_dec(ip_address):
    octet_1, octet_2, octet_3, octet_4 = ip_address.split('.')
    octet_1 = int(octet_1, 2)
    octet_2 = int(octet_2, 2)
    octet_3 = int(octet_3, 2)
    octet_4 = int(octet_4, 2)
    dec_ip = str(octet_1) + "." + str(octet_2) + "." + str(octet_3) + "." + str(octet_4)
    return dec_ip

def print_problem(n, ip_address, base):
    print("\nProblem " + str(n) + ":\n")
    print("In binary, the IP address " + ip_address + " is:")
    if base == 2:
        print(dec_to_bin(ip_address) + "\n")
    elif base == 10:
        print(bin_to_dec(ip_address) + "\n")
    else:
        print("This program currently only supports binary and decimal representations.")

# Decimal -> binary problems (Problems 1-5)

ip_addresses = [ "192.168.16.13"    # Problem 1
               , "164.10.241.2"     # Problem 2
               , "10.244.116.15"    # Problem 3
               , "15.255.200.153"   # Problem 4
               , "172.99.62.9"      # Problem 5
               ]

for i in range(0, 5):
    print_problem(i + 1, ip_addresses[i], 2)

# Binary -> decimal problems (Problems 6-10)

ip_addresses = [ "10110100.11101011.00001000.10010001"  # Problem 6
               , "10001100.11111111.11000000.00000001"  # Problem 7
               , "00010001.11001100.00000001.00010010"  # Problem 8
               , "11100111.00110011.10101010.11111110"  # Problem 9
               , "00010111.11101110.01010101.10000000"  # Problem 10
               ]

for i in range(0, 5):
    print_problem(i + 6, ip_addresses[i], 10)