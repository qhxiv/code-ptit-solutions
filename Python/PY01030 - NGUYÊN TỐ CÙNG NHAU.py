from math import gcd

n, k = list(map(int, input().split()))

l = 10 ** (k - 1)
r = 10 ** k

cnt = 0
for i in range(l, r):
    if (gcd(n, i) == 1):
        cnt += 1
        print(i, end = " ")
        if (cnt % 10 == 0):
            print()