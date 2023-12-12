def check(n):
    if n < 10: return False
    return str(n) == str(n)[::-1]

a = []
n, m = map(int, input().split())
for i in range(n):
    a.append(list(map(int, input().split())))
rec = -1
for i in range(n):
    for j in range(m):
        if check(a[i][j]):
            rec = max(rec, a[i][j])
            
if rec == -1:
    print("NOT FOUND")
else:
    print(rec)
    for i in range(n):
        for j in range(m):
            if a[i][j] == rec:
                print("Vi tri [%d][%d]" % (i, j))