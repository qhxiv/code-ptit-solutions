for _ in range(int(input())):
    n, b = map(int, input().split())
    m = 0
    while b**(m + 1) < n:
        m += 1
    res = ""
    while m >= 0:
        tmp = n // b**m
        if tmp > 9:
            tmp = chr(tmp - 10 + ord("A"))
        res += str(tmp)
        n %= b**m
        m -= 1
    print(res)