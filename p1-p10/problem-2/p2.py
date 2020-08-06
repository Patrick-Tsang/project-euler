a = 1
b = 1

res = 0

while b < 4000000:
    if b % 2 == 0:
        res += b 
    temp = b 
    b += a 
    a = temp 



print(res)