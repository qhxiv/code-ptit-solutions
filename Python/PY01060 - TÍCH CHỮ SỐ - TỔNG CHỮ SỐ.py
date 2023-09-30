for _ in range(int(input())):
    a = input()
    n = len(a)
    s = 0
    p = 1
    for i in range(n):
        d = int(a[i])
        if (i % 2 != 0):
            s += d
        else:
            if (d != 0):
                p *= d
    print(p, s)