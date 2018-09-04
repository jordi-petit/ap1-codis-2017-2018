from jutge import read

# La funció maxim, donats dos enters retorna un enter que és el seu màxim.
def maxim(a, b):
    if a > b:
        return a
    else:
        return b
    
# Programa que llegeix dos enters i n'escriu el seu màxim, cridant maxim().    
x, y = read(int, int)
print(maxim(x, y))
