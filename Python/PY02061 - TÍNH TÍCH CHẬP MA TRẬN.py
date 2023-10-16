for _ in range(int(input())):
    res = 0
    n, m = map(int, input().split())
    a = []
    for i in range(n):
        a.append(list(map(int, input().split())))
    b = []
    for i in range(3):
        b.append(list(map(int, input().split())))
    for i in range(n - 2):
        for j in range(m - 2):
            for k in range(3):
                for l in range(3):
                    res += a[i + k][j + l] * b[k][l]
    print(res)