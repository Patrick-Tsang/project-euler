import math

primes = []

def prime(x):
    for i in primes:
        if i > math.sqrt(x):
            exit
        if x % i == 0:
            return False
    primes.append(x)
    return True

i = 10001
x = 2

while(x < 2000000):
    x += 1
    prime(x)
print(primes)
print(sum(primes))