s = input()
se = set()
for i in range(0, len(s), 2):
    if i == len(s) - 1:
        break
    se.add(int(s[i:i+2]))
for i in sorted(se):
    print(i, end = " ")