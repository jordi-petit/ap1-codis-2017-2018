# Multiplicació de matrius


def mult(a, b):
    """Multiplica dues matrius quadrades de la mateixa mida."""
    n = len(a)
    c = [[0 for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                c[i][j] += a[i][k] * b[k][j]
    return c


def main():
    a = [
        [1, 2, 3],
        [4, 5, 6],
        [9, 8, 7],
    ]

    b = [
        [1, 9, 5],
        [3, 5, 6],
        [9, 3, 1],
    ]

    c = mult(a, b)
    print(c)


main()