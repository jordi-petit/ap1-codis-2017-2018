# Calcular l'n-èsim número de Fibonacci
 
from jutge import read

n = read(int)
a, b = 0, 1
i = 1
while i <= n:
    a, b = b, a + b
    i = i + 1
print(a)
   