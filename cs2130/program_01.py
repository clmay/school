a = {1, 3, 5, 6, 8}
b = {2, 3, 4, 7, 9}


def set_union(p, q):
    res = set()
    for elem in p:
        res.add(elem)
    for elem in q:
        res.add(elem)
    return res


def set_intersection(p, q):
    res = set()
    for elem_1 in p:
        for elem_2 in q:
            if elem_1 == elem_2:
                res.add(elem_1)
    return res


def set_complement(p, q):
    res = set(p)
    for elem_1 in p:
        for elem_2 in q:
            if elem_1 == elem_2:
                res.remove(elem_1)
    return res


union = set_union(a, b)
inter = set_intersection(a, b)
rcomp = set_complement(a, b)

print('A is ' + str(a))
print('B is ' + str(b) + '\n')

print('A u B is ' + str(union))
print('A n B is ' + str(inter))
print('A - B is ' + str(rcomp))
