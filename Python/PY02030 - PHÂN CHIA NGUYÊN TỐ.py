import math


def nt(n):
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return n > 1

input()
se = set()
a = []
for i in map(int, input().split()):
    if not se.__contains__(i):
        se.add(i)
        a.append(i)
n = len(a)
b = [0] * n
b[0] = a[0]
for i in range(1, n):
    b[i] = a[i] + b[i - 1]
f = True
for i in range(n):
    if nt(b[i]) and nt(b[n - 1] - b[i]):
        f = False
        print(i)
        break
if f: print("NOT FOUND")