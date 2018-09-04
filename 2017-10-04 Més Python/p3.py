# La funció power(x, y) retorna x^y, donat que y>=0.
def power(x, y):
    p = 1
    i = 0
    while i < y:
        p = p * x
        i = i - 1
    return p

# La funció primer(n) retorna si el natural n és o no un nombre primer.
def primer(n):
    if n <= 1: 
        return False
    # Mira si algun nombre entre 2 i √n divideix n.
    c = 2
    while c*c <= n:
        if n % c == 0:
            return False
        c = c + 1
    return True

# Els booleans en Python funcionen com en C++, però es diuen False i True enlloc de false i true. 



