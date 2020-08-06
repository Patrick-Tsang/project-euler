a1 = 0
a2 = 0

for i in range(1, 101):
    a1 += i ** 2
    a2 += i 


print(str(a1) + " x " + str(a2**2) + " = "  + str(a1 - a2**2))