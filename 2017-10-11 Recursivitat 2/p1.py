# Floc de Koch   
# (vegeu https://en.wikipedia.org/wiki/Koch_snowflake)


import turtle           # https://docs.python.org/3.6/library/turtle.html

# pinta el segment bàsic de Koch _/\_ amb segments de llargada long i passos passes recursives
def figura(long, passos):
    if passos == 1:
        turtle.forward(long)
        turtle.left(60)
        turtle.forward(long)
        turtle.right(120)
        turtle.forward(long)
        turtle.left(60)
        turtle.forward(long)
    else:
        figura(long/3, passos-1)
        turtle.left(60)
        figura(long/3, passos-1)
        turtle.right(120)
        figura(long/3, passos-1)
        turtle.left(60)
        figura(long/3, passos-1)


# pinta el floc de Koch
def floc(long, passos):
    figura(long, passos)
    turtle.right(120)
    figura(long, passos)
    turtle.right(120)
    figura(long, passos)


floc(100, 3)
input()         # espera a tancar la finestra
