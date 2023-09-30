import math

t = int(input())
while t > 0:
    t -= 1
    a = list(map(float, input().split()))
    cnt = 0
    while (a[0] < a[2]):
        cnt += 1
        a[0] += a[0] * a[1] / 100
    print(cnt)