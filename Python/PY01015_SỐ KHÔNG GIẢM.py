import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    check = True
    for i in range(1, len(n)):
        if (int(n[i - 1]) > int(n[i])):
            check = False
            break
    if check: print("YES")
    else: print("NO")