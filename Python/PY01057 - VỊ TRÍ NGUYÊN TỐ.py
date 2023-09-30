import math


isPrime = [True] * 501
isPrime[0] = isPrime[1] = False
for i in range(2, math.ceil(math.sqrt(500))):
    if (isPrime[i]):
        for j in range(i * i, 501, i):
            isPrime[j] = False

def check(s):
    n = len(s)
    for i in range(n):
        if isPrime[i] != isPrime[int(s[i])]:
            return False
    return True

for _ in range(int(input())):
    if (check(input())):
        print("YES")
    else:
        print("NO")