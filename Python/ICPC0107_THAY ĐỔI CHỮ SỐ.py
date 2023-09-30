import math

def solve(a, b, p, q):
    a = str(a)
    b = str(b)
    c = min(int(a.replace(p, q)) + int(b.replace(p, q)), int(a.replace(q, p)) + int(b.replace(q, p)))
    d = max(int(a.replace(p, q)) + int(b.replace(p, q)), int(a.replace(q, p)) + int(b.replace(q, p)))
    print("%d %d\n" % (c, d))

t = int(input())
while t > 0:
    t -= 1
    c = list(map(str, input().split()))
    q = c[0]
    p = c[1]
    a = list(map(int, input().split()))
    if len(a) == 2:
        solve(a[0], a[1], p, q)
    else:
        a = a[0]
        b = int(input())
        solve(a, b, p, q)