def check(s):
    if s < 10: return False
    s = str(s)
    l, r = 0, len(s) - 1
    while l < r:
        if s[l] != s[r]:
            return False
        l += 1
        r -= 1
    return True

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