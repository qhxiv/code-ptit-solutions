import math

N = 1000004
isPrime = [True] * 1000005
isPrime[0] = isPrime[1] = False
for i in range(2, math.floor(math.sqrt(N))):
    if (isPrime[i]):
        for j in range(i * i, N + 1, i):
            isPrime[j] = False

for _ in range(int(input())):
    n = int(input())
    se = set()
    for x in range(13, n):
        y = int(str(x)[::-1])
        if (not(x != y and isPrime[x] and isPrime[y] and y < n and (not x in se))):
            continue
        print(x, y, end = " ")
        se.add(x)
        se.add(y)
    print()