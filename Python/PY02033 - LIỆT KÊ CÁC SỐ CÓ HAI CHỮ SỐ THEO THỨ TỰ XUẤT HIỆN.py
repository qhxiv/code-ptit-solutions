s = input()
se = set()
a = []
for i in range(0, len(s), 2):
    if i == len(s) - 1:
        break
    x = int(s[i:i+2])
    if not se.__contains__(x):
        se.add(x)
        a.append(x)
for i in a:
    print(i, end = " ")