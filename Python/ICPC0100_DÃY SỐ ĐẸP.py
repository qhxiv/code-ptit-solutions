import math

t = int(input())
while (t > 0):
    t -= 1
    n = int(input())
    a = list(map(int, input().split()))
    res = 0
    for i in range(n):
        if i > 0:
            g = max(a[i], a[i - 1])
            s = min(a[i], a[i - 1])
            if g > s * 2:
                cnt = 0
                while g > s * 2:
                    cnt += 1
                    g = int(g / 2) + g % 2
                res += cnt
    print(res)