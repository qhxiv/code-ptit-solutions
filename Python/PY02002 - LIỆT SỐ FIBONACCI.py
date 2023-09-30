li = []
li += [0, 1]
while (len(li) < 100):
    li.append(li[-1] + li[-2])

for _ in range(int(input())):
    a, b = list(map(int, input().split()))
    for i in range(a, b + 1):
        print(li[i], end = " ")
    print()