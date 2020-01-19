def union(p, q):
    res = set()
    for elem in p:
        res.add(elem)
    for elem in q:
        res.add(elem)
    return res


def intersection(p, q):
    res = set()
    for elem_1 in p:
        for elem_2 in q:
            if elem_1 == elem_2:
                res.add(elem_1)
    return res


def relative_complement(p, q):
    res = set(p)
    for elem_1 in p:
        for elem_2 in q:
            if elem_1 == elem_2:
                res.remove(elem_1)
    return res


a = {1, 3, 5, 6, 8}
b = {2, 3, 4, 7, 9}

a_u_b = union(a, b)
a_n_b = intersection(a, b)
a_c_b = relative_complement(a, b)

print("A is " + str(a))
print("B is " + str(b) + "\n")

print("A u B is " + str(a_u_b))
print("A n B is " + str(a_n_b))
print("A - B is " + str(a_c_b))
