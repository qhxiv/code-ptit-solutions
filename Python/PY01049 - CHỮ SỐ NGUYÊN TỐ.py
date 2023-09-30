import math


isPrime = [True] * 501
isPrime[0] = isPrime[1] = False
for i in range(2, math.floor(math.sqrt(500)) + 1):
    if isPrime[i]:
        for j in range(i * i, 501, i):
            isPrime[j] = False

def check(n):
    cnt = 0
    for i in n:
        if isPrime[int(i)]:
            cnt += 1
    return cnt > len(n) - cnt and isPrime[len(n)]

for _ in range(int(input())):
    n = input()
    if (check(n)):
        print("YES")
    else:
        print("NO")