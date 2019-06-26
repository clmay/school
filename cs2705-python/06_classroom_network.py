import ipaddress
import time

my_ip_interface = ipaddress.ip_interface("138.191.0.0/25")
my_ip_network = my_ip_interface.network
classrooms = list(ipaddress.ip_network(
    my_ip_network).subnets(prefixlen_diff=2))

small_class_1 = list(ipaddress.ip_network(classrooms[2]).subnets())
small_class_2 = list(ipaddress.ip_network(classrooms[2]).subnets())
offices = list(ipaddress.ip_network(small_class_2[1]).subnets())

print("\nRouting table:")
print("==============")

print("\Lab 1:\n")
print("Network address: {}".format(offices[0].network_address))
print("Broadcast address: {}".format(offices[0].broadcast_address))
print("Number of hosts: {}".format(len(list(offices[0].hosts()))))
print("Valid host range: {} - {}".format(
    offices[0].network_address - 1, offices[0].broadcast_address - 1))

print("\nLab 2:\n")
print("Network address: {}".format(offices[1].network_address))
print("Broadcast address: {}".format(offices[1].broadcast_address))
print("Number of hosts: {}".format(len(list(offices[1].hosts()))))
print("Valid host range: {} - {}".format(
    offices[0].network_address - 1, offices[1].broadcast_address - 1))

print("\nClassroom 3:\n")
print("Network address: {}".format(small_class_1[0].network_address))
print("Broadcast address: {}".format(small_class_1[0].broadcast_address))
print("Number of hosts: {}".format(len(list(small_class_1[0].hosts()))))
print("Valid host range: {} - {}".format(
    small_class_1[0].network_address - 1, small_class_1[0].broadcast_address - 1))

print("\nClassroom 4:\n")
print("Network address: {}".format(small_class_1[1].network_address))
print("Broadcast address: {}".format(small_class_1[1].broadcast_address))
print("Number of hosts: {}".format(len(list(small_class_1[1].hosts()))))
print("Valid host range: {} - {}".format(
    small_class_1[0].network_address - 1, small_class_1[1].broadcast_address - 1))

print("\nClassroom 5:\n")
print("Network address: {}".format(small_class_2[0].network_address))
print("Broadcast address: {}".format(small_class_2[0].broadcast_address))
print("Number of hosts: {}".format(len(list(small_class_2[0].hosts()))))
print("Valid host range: {} - {}".format(
    small_class_2[0].network_address - 1, small_class_2[0].broadcast_address - 1))

print("\nClassroom 1:\n")
print("Network address: {}".format(classrooms[0].network_address))
print("Broadcast address: {}".format(classrooms[0].broadcast_address))
print("Number of hosts: {}".format(len(list(classrooms[0].hosts()))))
print("Valid host range: {} - {}".format(
    classrooms[0].network_address - 1, classrooms[0].broadcast_address - 1))

print("\nClassroom 2:\n")
print("Network address: {}".format(classrooms[1].network_address))
print("Broadcast address: {}".format(classrooms[1].broadcast_address))
print("Number of hosts: {}".format(len(list(classrooms[1].hosts()))))
print("Valid host range: {} - {}".format(
    classrooms[0].network_address - 1, classrooms[1].broadcast_address - 1))
