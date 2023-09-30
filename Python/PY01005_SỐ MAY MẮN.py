n = input()
c4 = c7 = 0
for i in n:
    if i == '4':
        c4 += 1
    elif i == '7':
        c7 += 1
r = c4 + c7
if r == 4 or r == 7:
    print("YES")
else: print("NO")