import math

def isPrime(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if ((n % i == 0)):
            return False
    return n >= 2

def check(n):
    if (not isPrime(n)):
        return False
    if (not isPrime(int(str(n)[::-1]))):
        return False
    s = 0
    while (n > 0):
        d = int(n % 10)
        if (not isPrime(d)):
            return False
        s += d
        n //= 10
    if (not isPrime(s)):
        return False
    return True

t = int(input())
a = []
while (len(a) < t):
    a += list(map(int, input().split()))
for n in a:
    if (check(n)):
        print("Yes")
    else:
        print("No")