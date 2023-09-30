import math


def isPrime(n):
    for i in range(2, math.ceil(math.sqrt(n))):
        if n % i == 0:
            return False
    return n > 1

for _ in range(int(input())):
    n = input()
    a = int(n[:3])
    b = int(n[-3:])
    if (isPrime(a) and isPrime(b)):
        print("YES")
    else:
        print("NO")