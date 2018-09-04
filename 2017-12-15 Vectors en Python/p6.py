# pas de paràmetres, exemple 2

def g(v):
    print("v = ", v)
    v.append(99)
    print("v = ", v)

a = [1, 2, 3]
print("a =", a)
g(a)
print("a =", a)