# Escriure un rectangle amb accions

from jutge import read

# acció que escriu una fila amb n símbols c
def escriure_fila(n, c):
    i = 1
    while i <= n:
        print(c, end='')
        i = i + 1
   print()
  
# acció que escriu un rectangle de m files i n columnes amb símbols c   
def escriure_rectangle(m, n, c)
    i = 1
    while i <= m:
        escriure_fila(n, c)
        i = i + 1