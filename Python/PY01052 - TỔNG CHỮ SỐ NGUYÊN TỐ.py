import math


def check(s):
    for i in range(2, math.floor(math.sqrt(s)) + 1):
        if s % i == 0:
            return False
    return s >= 2

for _ in range(int(input())):
    n = int(input())
    s = 0
    for i in str(n):
        s += int(i)
    if (check(s)):
        print("YES")
    else:
        print("NO")