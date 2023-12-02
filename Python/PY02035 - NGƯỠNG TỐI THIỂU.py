s = input()
k = int(input())
d = {}
n = len(s)
a = set()
for i in range(2, n + 1, 2):
    x = int(s[i - 2:i])
    d.setdefault(x, 0)
    d[x] += 1
    a.add(x)
a = sorted(a)

f = True
for i in a:
    if d[i] >= k:
        f = False
        print(i, d[i])
if f:
    print("NOT FOUND")