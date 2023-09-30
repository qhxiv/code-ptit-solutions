a = [0, "0", "2", "4", "6", "8"]
x = [0] * 10

def check():
    num = ""
    for i in range(1, d + 1):
        num = x[i] + num + x[i]
    if (num[0] == "0"):
        return
    num = int(num)
    if (num < n):
        res.append(num)

def Try(i):
    for j in range(1, 6):
        x[i] = a[j]
        if (i == d):
            check()
        else:
            Try(i + 1)

for _ in range(int(input())):
    n = int(input())
    mxd = len(str(n)) // 2
    res = []
    for d in range(1, mxd + 1):
        Try(1)
    res.sort()
    print(*res)