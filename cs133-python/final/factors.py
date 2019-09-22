# Functions for lists

def list_to_table(list):
    """Convert a list to a tabulated string"""

    list_to_table = ""

    for row in range(len(list)):
        list_to_table += str(row+2) + "\t" + str(list[row]) + "\n"

    return list_to_table

def sort_list(list):
    """Sort the values of a nested list"""

    sorted_list = []

    for row in range(len(list)):
        new_row = sorted(list[row])
        sorted_list.append(new_row)

    return sorted_list

def remove_duplicates(list):
    """Remove duplicate values of nested list"""

# Functions for factors

def list_factors(n):
    """Return factors up to (incl.) integer n"""

    list_of_factors = []

    for i in range(2, n+1):
        factors = []
        for j in range(2, i+1):
            if i % j == 0:
                factors.append(j)
        list_of_factors.append(factors)

    return list_of_factors

def shift_factors(list, n):
    """Shift the values of a list of factors up or down"""

    shift = n-2 # because lowest factor is two, otherwise scale root left out
    shifted_factors = []

    for row in range(len(list)):
        new_row = []
        for item in range(len(list[row])):
            new_item = int(list[row][item]) + n
            new_row.append(new_item)
        shifted_factors.append(new_row)

    return shifted_factors

def map_factors(list, n):
    """Map list of factors to n scale degrees"""

    mapped_factors = []

    for row in range(len(list)):
        new_row = []
        for item in range(len(list[row])):
            new_item = int(list[row][item]) % n
            new_row.append(new_item)
        mapped_factors.append(new_row)

    return mapped_factors

# Functions for scales

# map notes to major scale

# compute remainders of factors for chromatic scale, return as list

# compute remainders of factors for pentatonic scale, return as list

# compute remainders of factors for any scale based on its degrees, return as list

number = int(input("Print a table of factors of length: "))
shift = int(input("Shift the factors to this (use '0' for tonic): "))
width = int(input("Map the factors to this many scale degrees: "))

factors = list_factors(number)
shifted = shift_factors(factors, shift)
mapped = map_factors(shifted, width)
sorted_map = sort_list(mapped)
sorted_table = list_to_table(sorted_map)
# clean_map = remove_duplicates(sorted_map)

print(factors,"\n")
print(shifted,"\n")
print(mapped,"\n")
print(sorted_map,"\n")
print(sorted_table,"\n")
# print(clean_map,"\n")
