# -*- coding: UTF-8 -*-


# temps exponencial
def slowfib(n):
    if n <= 1:
        return n
    else:
        return slowfib(n - 1) + slowfib(n - 2)


# temps lineal
def fib(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a + b
    return a


# retorna X*Y, amb X i Y matrius 2×2
def mult(X, Y):
    return [
        [ X[0][0]*Y[0][0] + X[0][1]*Y[1][0] , X[0][0]*Y[0][1] + X[0][1]*Y[1][1] ],
        [ X[1][0]*Y[0][0] + X[1][1]*Y[1][0] , X[1][0]*Y[0][1] + X[1][1]*Y[1][1] ]
    ]

# retorna X^n, amb X matriu 2×2
def fastexp(X, n):
    if n == 0:
        return [ [1, 0],
                 [0, 1] ]
    else:
        Y = fastexp(X, n//2)
        if n%2 == 0:
            return mult(Y, Y)
        else:
            return mult(mult(Y, Y), X)


# temps logarítmic
def fastfib(n):
    M = [ [1, 1] ,
          [1, 0] ]
    return fastexp(M, n)[0][1]
  