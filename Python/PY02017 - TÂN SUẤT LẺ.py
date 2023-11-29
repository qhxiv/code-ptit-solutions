for _ in range(int(input())):
    input()
    a = list(map(int, input().split()))
    d = {}
    for i in a:
        d[i] = 1 if d.get(i) == None else d[i] + 1
    for i in d.keys():
        if d[i] % 2 == 1:
            print(i)
            break