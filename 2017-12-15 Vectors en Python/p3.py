# Genera totes les permutacions de n elements

from jutge import read


def genera(v, u, i):
    """Genera totes les permutacions havent fixat les primeres posicions en v i havent utilizat els valors en u."""
    n = len(v)
    if i == n:
        print(v)
    else:
        for j in range(n):
            if not u[j]:
                u[j] = True
                v[i] = j
                genera(v, u, i + 1)
                u[j] = False


def main():
    n = read(int)
    v = [None  for i in range(n)]
    u = [False for i in range(n)]
    genera(v, u, 0)


main()