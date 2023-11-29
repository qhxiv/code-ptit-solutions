n = int(input())

res = 0
a = []
for i in range(n):
    s = input()
    a.append(s)
    cnt = 0
    for i in s:
        if i == "C":
            cnt += 1
    res += cnt * (cnt - 1) / 2

for i in range(n):
    cnt = 0
    for j in range(n):
        if a[j][i] == "C":
            cnt += 1
    res += cnt * (cnt - 1) / 2
print(int(res))