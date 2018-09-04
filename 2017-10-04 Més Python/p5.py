# Mitjana d'una seqüència de nombres

from jutge import read

s = 0
n = 0
x = read(int)
while x is not None:
    s = s + x
    n = n + 1
    x = read(int)
print(s/n)              # (divisió de reals)