n, m = map(int, input().split())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
t = abs(n - m)

if n >= m:
    i = -1
    while t > 0:
        t -= 1
        i += 2
        print(*a[i])
    while i < n - 1:
        i += 1
        print(*a[i])
else:
    se = set()
    tmp = 1
    while t > 0:
        t -= 1
        se.add(tmp)
        tmp += 2
    for i in a:
        for j in range(len(i)):
            if se.__contains__(j): continue
            print(i[j], end = " ")
        print()