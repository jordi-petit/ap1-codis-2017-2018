# Nombre d'elements successius repetits en una seqüència d'enters.

from jutge import read

r = 0
a = read(int)
if a is not None:
    b = read(int)
    while b is not None:
        if b == a:
            r = r + 1
        a = b
        b = read(int)
print(r)
