import math

N = 1000000
isPrime = [True] * 1000001
isPrime[0] = isPrime[1] = False
for i in range(2, math.floor(math.sqrt(N))):
    if (isPrime[i]):
        for j in range(i * i, N, i):
            isPrime[j] = False

for _ in range(int(input())):
    n = int(input())
    cnt = 0
    for i in range(2, n - 6):
        if (isPrime[i] and (isPrime[i + 2] or isPrime[i + 4]) and isPrime[i + 6]):
            cnt += 1
    print(cnt)