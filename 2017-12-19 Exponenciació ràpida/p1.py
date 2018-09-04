
# retorna x^n, amb n natural
def exp(x, n):
    if n == 0:
        return 1
    else:
        return x * exp(x, n - 1)

        
# retorna x^n, amb n natural
def fastexp(x, n):
    if n == 0:
        return 1
    else:
        y = fastexp(x, n//2)
        if n%2 == 0:
            return y * y
        else:
            return y * y * x
