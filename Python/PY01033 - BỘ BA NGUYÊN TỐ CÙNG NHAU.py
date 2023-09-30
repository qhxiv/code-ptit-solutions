from math import gcd

l, r = list(map(int, input().split()))
r += 1

for i in range(l, r):
    for j in range(i + 1, r):
        for k in range(j + 1, r):
            if (gcd(i, j) == 1 and gcd(j, k) == 1 and gcd(i, k) == 1):
                print("(%d, %d, %d)" % (i, j, k))