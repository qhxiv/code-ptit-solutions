import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    if len(n) < 2 or n[-2:] != "86":
        print("NO")
    else:
        print("YES")