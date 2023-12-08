from math import floor


for _ in range(int(input())):
    n, m, l = map(int, input().split())
    pre = []
    for i in range(n + 1):
        pre.append([0] * (m + 1))
    
    for i in range(1, n + 1):
        j = 0
        for x in map(int, input().split()):
            j += 1
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + x

    for i in range(1, n - l + 2):
        for j in range(1, m - l + 2):
            s = pre[i + l - 1][j + l - 1] - pre[i + l - 1][j - 1] - pre[i - 1][j + l - 1] + pre[i - 1][j - 1]
            print(floor(s / (l*l)), end = " ")
        print()