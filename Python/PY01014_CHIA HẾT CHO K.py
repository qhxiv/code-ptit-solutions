import math

z = list(map(int, input().split()))
a = z[0]
k = z[1]
n = z[2]
if a >= n:
    print(-1)
else:
    c = math.ceil(a / k) * k
    if c == a: c += k
    ch = False
    while c <= n:
        print(c - a, end = ' ')
        c += k
        ch = True
    if not ch:
        print(-1)