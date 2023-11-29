input()
a = sorted(set(map(int, input().split())))
b = sorted(set(map(int, input().split())))
ca = [False] * 100000
cb = [False] * 100000
for i in a:
    ca[i] = True

for i in b:
    if ca[i]:
        print(i, end = " ")
    cb[i] = True
print()

for i in a:
    if not cb[i]:
        print(i, end = " ")
print()

for i in b:
    if not ca[i]:
        print(i, end = " ")