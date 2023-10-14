while True:
    a, b, c, d = list(map(int, input().split()))
    if a == 0 and b == 0 and c == 0 and d == 0:
        break
    res = 0
    while not (a == b and b == c and c == d):
        a, b, c, d = abs(a - b), abs(b - c), abs(c - d), abs(d - a)
        res += 1
    print(res)