from math import sqrt

N = 10000
p = [True] * (N + 1)
p[0] = p[1] = False
for i in range(2, int(sqrt(N) + 1)):
    if p[i]:
        for j in range(i*i, N + 1, i):
            p[j] = False

input()
a = list(map(int, input().split()))
res = 0
for i in a:
    l = r = 0
    j = i
    while j > 1 and not p[j]:
        j -= 1
        l += 1
    if j == 1: l = N + 1
    j = i
    while j <= N and not p[j]:
        j += 1
        r += 1
    res = max(res, min(l, r)) 
print(res)