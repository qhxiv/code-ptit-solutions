for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    b = sorted(list(map(int, input().split())))
    f = True
    for i in range(n):
        if a[i] > b[i]:
            f = False
            break
    if f: print("YES")
    else: print("NO")
