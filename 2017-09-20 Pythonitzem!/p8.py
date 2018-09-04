# Intercanvi de dues variables 

# 1er intent: no funciona !!!
a = ...
b = ...
a = b           
b = a
print(a, b)

# 2n intent: ara sí!
a = ...
b = ...
c = a           # variable temporal
a = b    
b = c
print(a, b)

# Python style
a = ...
b = ...
a, b = b, a     # assignació múltiple
