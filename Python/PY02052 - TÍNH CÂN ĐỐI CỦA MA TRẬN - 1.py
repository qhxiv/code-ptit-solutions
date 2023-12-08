n = int(input())
top = bottom = 0
for i in range(n):
    j = 0
    for k in map(int, input().split()):
        if i > j: bottom += k
        elif i < j: top += k
        j += 1
res = abs(top - bottom)
if res > int(input()): print("NO")
else: print("YES")
print(res)