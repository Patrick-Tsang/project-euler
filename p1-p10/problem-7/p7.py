import math

primes = []

def prime(x):
    for i in primes:
        if x % i == 0:
            return False
    primes.append(x)
    return True

i = 10001
x = 2



while(i > 0):
    x += 1
    if(prime(x)):
        i -= 1

print(x)