t = 1
while t > 0:
    t -= 1
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    for i in a:
        if len(b) != 0:
            if (i % 2 == b[len(b) - 1] % 2):
                del b[len(b) - 1]
                continue
        b.append(i)
    print(len(b))