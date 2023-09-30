import math

def isPrime(n):
    for i in range(2, math.ceil(math.sqrt(n))):
        if n % i == 0:
            return False
    return n > 1

def check(n):
    s = 0
    d = len(n)
    for i in range(d):
        x = int(n[i])
        if (i % 2 != x % 2):
            return False
        s += x
    return isPrime(s)

for _ in range(int(input())):
    if (check(input())):
        print("YES")
    else: print("NO")