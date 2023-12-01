m, n = map(int, input().split())
d = {}
a = list(map(int, input().split()))
for i in a:
    d.setdefault(i, 0)
    d[i] += 1
    
max_val = -1
tmp = -1
res = "NONE"
for i in d.values():
    max_val = max(max_val, i)
for i in d.keys():
    if d[i] < max_val and d[i] >= tmp:
        tmp = d[i]
        res = i
print(res)