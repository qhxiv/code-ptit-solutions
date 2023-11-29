for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = {}
    b = {}
    for i in map(int, input().split()):
        a[i] = 1 if a.get(i) == None else a[i] + 1
    for i in map(int, input().split()):
        b[i] = 1 if b.get(i) == None else b[i] + 1
    f = False
    for i in map(int, input().split()):
        if a.get(i) != None and b.get(i) != None:
            print(i, end = " ")
            f = True
            a[i] -= 1
            b[i] -= 1
            if a[i] == 0: a.pop(i)
            if b[i] == 0: b.pop(i)
    if not f:
        print("NO")
    else: print()