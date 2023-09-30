t = int(input())
while t > 0:
    t -= 1
    n = input()
    check = True
    for i in n:
        if i != '4' and i != '7':
            check = False
    if check:
        print("YES")
    else: print("NO")