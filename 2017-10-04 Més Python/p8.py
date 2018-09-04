# Escriure les arrels quadrades amb 6 digíts de precisió

from jutge import read
import math

x = read(float)
while x is not None:
    s = math.sqrt(x)
    print("%.6f" % s)
    x = read(float)