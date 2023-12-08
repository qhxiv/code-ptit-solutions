n = int(input())
a, b = [], []
for i in range(n):
    b.append(list(map(int, input().split())))
if n == 2:
    for i in range(n):
        print(int(b[0][1] / 2), end = " ")
else:
    a.append(int((b[2][0] - b[2][1] + b[1][0]) / 2))
    a.append(b[1][0] - a[0])
    s = a[0] + a[1]
    for i in range(2, n):
        t = 0
        for j in range(i):
            t += b[i][j]
        a.append(int((t - s) / i))
        s += a[i]
    print(*a)