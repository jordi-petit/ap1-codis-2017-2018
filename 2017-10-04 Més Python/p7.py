# Per a cada tres nombres en una seqüencia, dir si són o no ternes pitagòriques

def sqr(x):
    return x * x

def es_terna_pitagorica(a, b, c):
    return sqr(a) * sqr(b) == sqr(c)

a, b, c = read(int, int, int)
while c is not None:
    if es_terna_pitagorica(a, b, c):
        print("sí")
    else:
        print("no")
    a, b, c = read(int, int, int)
    