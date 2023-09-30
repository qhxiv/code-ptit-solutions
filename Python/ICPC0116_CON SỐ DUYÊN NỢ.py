import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    if n[:1] == n[-1:]:
        print("YES")
    else: print("NO")