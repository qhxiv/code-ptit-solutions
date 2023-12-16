from math import sqrt

N = int(input())
m = int(sqrt(N) / 2) + 5

Prime = []
p = [True] * (m + 1)
p[0] = p[1] = False
for i in range(2, int(sqrt(m)) + 1):
    if p[i]:
        for j in range(i*i, m + 1, i):
            p[j] = False
for i in range(m + 1):
    if p[i]:
        Prime.append(i);

n = len(Prime)
res = 0
se = []
z = 0
while z < n and Prime[z]**8 <= N:
    z += 1
    res += 1

for i in range(n - 1):
    for j in range(i + 1, n):
        if (Prime[i]*Prime[j])**2 <= N:
            res += 1

print(res)