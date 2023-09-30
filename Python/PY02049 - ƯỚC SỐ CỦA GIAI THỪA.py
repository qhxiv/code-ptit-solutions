for _ in range(int(input())):
    n, p = list(map(int, input().split()))
    res = 0
    a = p
    while a < n:
        res += n // a
        a *= p
    print(res)