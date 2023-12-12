min_val = 100001000010000
max_val = -1
n, m = map(int, input().split())
a = []
for i in range(n):
    tmp = list(map(int, input().split()))
    for j in tmp:
        min_val = min(min_val, j)
        max_val = max(max_val, j)
    a.append(tmp)

b = []
for i in range(n):
    for j in range(m):
        if a[i][j] == max_val - min_val:
            b.append((i, j))
if len(b) == 0:
    print("NOT FOUND")
else:
    print(max_val - min_val)
    for i in b:
        print("Vi tri [%d][%d]" % (i[0], i[1]))