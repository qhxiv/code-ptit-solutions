import math

def isPrime(n):
    for i in range(2, math.ceil(math.sqrt(n))):
        if (n % i == 0): return False
    return n > 1

def check(s):
    return isPrime(int(s[-4:]))

for _ in range(int(input())):
    if (check(input())):
        print("YES")
    else: print("NO")