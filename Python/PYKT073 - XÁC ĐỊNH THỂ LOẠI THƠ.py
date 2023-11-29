cnt = -1
a = []
for _ in range(int(input())):
    s = input().split()
    if len(s) == 7:
        if cnt == -1: cnt = 0
        elif cnt == 0: a.append(1)
        cnt += 1
    else:
        if cnt > 0:
            for i in range(cnt // 4):
                a.append(2)
        cnt = 0

print(len(a) + (cnt // 4 if cnt > 0 else 1))
print(*a, sep = '\n')
if cnt == 0:
    print(1)
else:
    for i in range(cnt // 4):
        print(2)