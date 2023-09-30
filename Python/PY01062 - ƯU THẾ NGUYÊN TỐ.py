import math

def p(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def check(a):
    n = len(a)
    cnt = 0
    for i in a:
        if p(int(i)):
            cnt += 1
    return p(n) and cnt > n - cnt

for _ in range(int(input())):
    n = input()
    if (check(n)):
        print("YES")
    else:
        print("NO")