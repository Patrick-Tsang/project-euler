a = 1
b = 2
c = 30

while a < c and b <= c:
    print(a,b,c)
    res = a**2 + b**2 + c**2
    if res == 1000:
        print(a * b * c)
        quit
        
    if res < 1000 and b < c:
        b += 1   
    else:
        if b != a + 1:
            a += 1
            b = a + 1
        else:
            c -= 1