p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
l = list(input().split())

while l[0] != '0':
    k = int(l[0])
    s = l[1]
    for i in s[::-1]:
        j = p.find(i)
        print(p[(j + k) % 28], end = '')
    print()

    l = list(input().split())