# Calcular el factorial d'un natural

from jutge import read

n = read(int)
f = 1
i = 1
while i <= n:
    f = f * i
    i = i + 1
print(f)
   