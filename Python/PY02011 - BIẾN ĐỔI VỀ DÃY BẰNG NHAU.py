n = int(input())
a = list(map(int, input().split()))
m = 2000000
for i in a:
    tmp = 0
    for j in a:
        tmp += abs(i - j)
    m = min(m, tmp)
print(m, end = " ")
for i in a:
    tmp = 0
    for j in a:
        tmp += abs(i - j)
    if tmp == m:
        print(i)
        break