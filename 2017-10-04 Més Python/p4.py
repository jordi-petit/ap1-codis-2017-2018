# Suma d'una seqüència de nombres
# (recordeu que cal picar Control+D per finalitzar l'entrada al terminal)

# Compte: En Python no hi ha while (cin >> x).
# Quan read() no pot llegir, retorna un valor especial anomenat None.

from jutge import read

s = 0
x = read(int)
while x is not None:
    s = s + x
    x = read(int)
print(s)