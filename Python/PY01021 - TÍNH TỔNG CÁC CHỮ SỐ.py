for _ in range(int(input())):
    s = 0
    l = []
    for i in input():
        if i.isdigit():
            s += int(i)
        else:
            l.append(i)
    l.sort()
    for i in l:
        print(i, end = "")
    print(s)