# Traducció P90260

from jutge import read


# Algun llest es va deixar de posar constants en Python! 😢
# La convenció és que les variables en MAJÚSCULES són constants 
# i no s'haurien de tocar (però no està prohibit).
#
# Com a mínim, les variables en Python poden tenir accents, en C++ no.


ALÇADA_PICA = 3143
ÚLTIM_ELEMENT = 0


def pic_guapo(x, y, z):
    return x < y and y > z and y > ALÇADA_PICA


def main():
    trobat = False
    a, b, c = read(int, int, int)
    while not trobat and c != ÚLTIM_ELEMENT:
        if pic_guapo(a, b, c):
            trobat = True
        else:
            a, b, c = b, c, read(int)
    print("SI" if trobat else "NO")       # operador condicional en Python com el ?: de C++.


main()
