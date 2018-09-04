# Ordenació per fusió (merge sort)


from jutge import read
from random import random
    # random genera un nombre real a l'atzar entre 0 i 1


def merge(v1, v2):
    """Retorna la fusió de dos vectors ordenats."""
    v = []
    n1, n2 = len(v1), len(v2)
    i1, i2 = 0, 0
    while i1 < n1 and i2 < n2:
        if v1[i1] <= v2[i2]:
            v.append(v1[i1])
            i1 += 1
        else:
            v.append(v2[i2])
            i2 += 1
    v += v1[i1:]
    v += v2[i2:]
    return v


def msort(v):
    """Retorna el vector v ordenat."""
    n = len(v)
    if n < 2:
        return v
    else:
        return merge(msort(v[n//2:]), msort(v[:n//2]))


def main():
    n = read(int)
    v = [random() for i in range(n)]
    print(msort(v))


main()