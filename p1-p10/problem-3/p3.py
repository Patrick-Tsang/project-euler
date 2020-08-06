a = 600851475143
b = 2

while a != b:
    if a % b == 0:
        a /= b 
    else:
        b += 1

print(a)