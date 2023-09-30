n = int(input())
a = list(map(int, input().split()))

pos = neg = 0
a.sort()
for i in a:
    if i < 0:
        neg += 1

b = a[n - 1] * a[n - 2]
c = a[0] * a[1]
d = b * a[n - 3]
e = c * a[n - 1]

print(max(max(b, c), max(d, e)))