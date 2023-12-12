from math import sqrt


def check(n):
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

n, m = map(int, input().split())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
rec = -1
for i in a:
    for j in i:
        if check(j):
            rec = max(rec, j)
if rec == -1:
    print("NOT FOUND")
else:
    print(rec)
    for i in range(n):
        for j in range(m):
            if a[i][j] == rec:
                print("Vi tri [%d][%d]" % (i, j))