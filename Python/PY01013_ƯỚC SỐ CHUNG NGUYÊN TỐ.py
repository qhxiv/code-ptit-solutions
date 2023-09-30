import math

def nt(a):
    n = 0
    while a > 0:
        n += a % 10
        a = math.floor(a / 10)
    if (n <= 1): return False
    check = True
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            check = False
            break
    return check

t = int(input())
while t > 0:
    t -= 1
    a = list(map(int, input().split()))
    res = nt(math.gcd(a[0], a[1]))
    if res:
        print("YES")
    else: print("NO")