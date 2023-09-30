import math

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    cnt = 0
    for i in range(1, n):
        if math.gcd(i, n) == 1:
            cnt += 1
    check = True
    for i in range(2, int(math.sqrt(cnt)) + 1):
        if cnt % i == 0:
            check = False
            break
    if cnt <= 1: check = False
    if check:
        print("YES")
    else: print("NO")