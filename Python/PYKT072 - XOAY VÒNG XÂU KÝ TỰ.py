def calc(s1, s2):
    n = len(s1)
    for i in range(n):
        if s2[i:] == s1[:n - i]:
            return i
    return -1

a = []
n = int(input())
for i in range(n):
    a.append(input())

res = 9999999999
for i in range(n):
    cnt = 0
    for j in range(n):
        if j == i: continue
        tmp = calc(a[i], a[j])
        if (tmp == -1):
            cnt = -1
            break
        else:
            cnt += tmp
    if cnt == -1:
        res = -1
        break
    res = min(res, cnt)
print(res)