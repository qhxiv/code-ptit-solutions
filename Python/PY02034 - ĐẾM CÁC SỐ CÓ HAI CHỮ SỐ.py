s = input()
d = {}
a = []
for i in range(0, len(s), 2):
    if i == len(s) - 1:
        break
    x = int(s[i:i+2])
    if d.get(x) == None:
        a.append(x)
        d[x] = 1
    else:
        d[x] += 1
for i in a:
    print(i, d[i])