t = int(input())
while t > 0:
    t -= 1
    n = input()
    if (n[:2] == n[-2:]):
        print("YES")
    else: print("NO")