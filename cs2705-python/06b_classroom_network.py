import ipaddress
import time

my_ip_interface = ipaddress.ip_interface("192.168.5.0/26")
my_ip_network = my_ip_interface.network
classrooms = list(ipaddress.ip_network(
    my_ip_network).subnets(prefixlen_diff=2))

print("\nLarge classrooms:\n")
for i in range(len(classrooms)):
    print(classrooms[i])

small_class_1 = list(ipaddress.ip_network(classrooms[2]).subnets())
small_class_2 = list(ipaddress.ip_network(classrooms[3]).subnets())

print("\nSmall classrooms:\n")
for i in range(len(small_class_1)):
    print(small_class_1[i])
print(small_class_2[0])

print("\nOffices:\n")

offices = list(ipaddress.ip_network(small_class_2[1]).subnets())
for i in range(len(offices)):
    print(offices[i])


print("\nRouting table:")
print("==============\n")

for i in range(0, 1):
    print("Office " + str(i + 1) + ":")
    print("---------")
    print("Network address: \t {}".format(offices[i].network_address))
    print("Broadcast address: \t {}".format(offices[i].broadcast_address))
    print("Number of hosts: \t {}".format(len(list(offices[i].hosts()))))
    print("Valid host range: \t {} - {}".format(
        offices[i].network_address + 1, offices[i].broadcast_address - 1))
    print()

for i in range(0, 3):
    print("Small classroom " + str(i + 1) + ":")
    print("---------")
    print("Network address: \t {}".format(small_classrooms[i].network_address))
    print("Broadcast address: \t {}".format(
        small_classrooms[i].broadcast_address))
    print("Number of hosts: \t {}".format(
        len(list(small_classrooms[i].hosts()))))
    print("Valid host range: \t {} - {}".format(
        offices[i].network_address + 1, small_classrooms[i].broadcast_address - 1))
    print()
