from math import sqrt


def nt(n):
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0: return False
    return n > 1

input()
se = set()
a = []
for i in map(int, input().split()):
    if not se.__contains__(i):
        a.append(i)
        se.add(i)

n = len(a)
a.insert(0, 0)
b = [0] * (n + 1)
for i in range(1, n + 1):
    b[i] = b[i - 1] + a[i]

f = True
for i in range(1, n + 1):
    if nt(b[i]) and nt(b[n] - b[i]):
        f = False
        print(i - 1)
        break
if f: print("NOT FOUND")