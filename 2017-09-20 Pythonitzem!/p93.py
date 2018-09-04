# Calcular ("a mà") la suma dels n primers naturals 
 
from jutge import read

n = read(int)
s = 0
i = 1
while i <= n:
    s = s + i
    i = i + 1
print(s)
   