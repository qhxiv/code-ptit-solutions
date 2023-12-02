a = []
n = int(input())
for i in range(n):
    a.append(input())

res = 0
for i in range(n):
    cnt = 0
    for j in range(n):
        if a[i][j] == "C":
            cnt += 1
    res += cnt * (cnt - 1) / int(2)

for i in range(n):
    cnt = 0
    for j in range(n):
        if a[j][i] == "C":
            cnt += 1
    res += cnt * (cnt - 1) / 2
print(int(res))