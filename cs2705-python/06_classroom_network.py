import ipaddress
import time

my_ip_interface = ipaddress.ip_interface("138.191.0.0/25")
my_ip_network = my_ip_interface.network
classrooms = list(ipaddress.ip_network(
    my_ip_network).subnets(prefixlen_diff=2))

small_class_1 = list(ipaddress.ip_network(classrooms[2]).subnets())
small_class_2 = list(ipaddress.ip_network(classrooms[3]).subnets())
offices = list(ipaddress.ip_network(small_class_2[1]).subnets())

print("Routing table:")
print("==============")
print()

for i in range(0, 2):
    print("Lab " + str(i + 1) + ":")
    print("------\n")
    print("Network address: {}".format(offices[i].network_address))
    print("Broadcast address: {}".format(offices[i].broadcast_address))
    print("Number of hosts: {}".format(len(list(offices[i].hosts()))))
    print("Valid host range: {} - {}".format(
        offices[i].network_address + 1, offices[i].broadcast_address - 1))
    print()

for i in range(3, 5):
    print("Classroom " + str(i) + ":")
    print("------------\n")
    print("Network address: {}".format(small_class_1[i - 3].network_address))
    print("Broadcast address: {}".format(
        small_class_1[i - 3].broadcast_address))
    print("Number of hosts: {}".format(
        len(list(small_class_1[i - 3].hosts()))))
    print("Valid host range: {} - {}".format(
        small_class_1[i - 3].network_address + 1, small_class_1[i - 3].broadcast_address - 1))
    print()

print("Classroom 5:")
print("------------\n")
print("Network address: {}".format(small_class_2[0].network_address))
print("Broadcast address: {}".format(small_class_2[0].broadcast_address))
print("Number of hosts: {}".format(len(list(small_class_2[0].hosts()))))
print("Valid host range: {} - {}".format(
    small_class_2[0].network_address + 1, small_class_2[0].broadcast_address - 1))
print()

for i in range(0, 2):
    print("Classroom " + str(i + 1) + ":")
    print("------------\n")
    print("Network address: {}".format(classrooms[i].network_address))
    print("Broadcast address: {}".format(classrooms[i].broadcast_address))
    print("Number of hosts: {}".format(len(list(classrooms[i].hosts()))))
    print("Valid host range: {} - {}".format(
        classrooms[i].network_address + 1, classrooms[i].broadcast_address - 1))
    print()
