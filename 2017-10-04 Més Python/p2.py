from jutge import read

# La funció maxim, donats dos enters retorna un enter que és el seu màxim.
def maxim(a, b):
    if a > b:
        return a
    else:
        return b
    
# La funció maxim3, donats tres enters retorna un enter que és el seu màxim.
def maxim3(a, b,c):
    return maxim(maxim(a, b), c)

# Programa que llegeix tres enters i n'escriu el seu màxim, cridant maxim3().    
x, y, z = read(int, int, int)
print(maxim3(x, y, z))
