# Genera nombres primers


from jutge import read


def primers(n):
    """Retorna un vector amb tots els nombres primers fins a n."""

    # Eratostenes
    p = []
    b = [True for i in range(n+1)]
    b[0] = b[1] = False
    for i in range(2, n+1):
        if b[i]:
            p.append(i)
            for j in range(2*i, n+1, i):
                b[j] = False
    return p


def main():
    n = read(int)
    p = primers(n)
    print(p)


main()