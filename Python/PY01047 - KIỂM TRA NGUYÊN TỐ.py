import math

isPrime = [True] * 10000
N = 9999
isPrime[0] = isPrime[1] = False

for i in range(2, math.floor(math.sqrt(N)) + 1):
    if isPrime[i]:
        for j in range(i * i, N + 1, i):
            isPrime[j] = False

for _ in range(int(input())):
    if isPrime[int(input()[-4:])]:
        print("YES")
    else:
        print("NO")