from collections import Counter

def primeFactor(num):
    res = []
    temp = 2
    while (num >= temp):
        if num % temp == 0:
            num /= temp
            res.append(temp)
        else:
            temp += 1
    return res 

combined = Counter([1])

for i in range(1, 21):
    combined = combined | Counter(primeFactor(i))

l = list(combined.elements())
print(l)
res = 1
for i in l:
    res *= i 

print(res)