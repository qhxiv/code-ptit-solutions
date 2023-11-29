for _ in range(int(input())):
    n, k = map(int, input().split())
    k = bin(k)[2:][::-1]
    s = 0
    for i in range(len(k)):
        if k[i] == "1":
            s += n**i
    print(s % 1000000007)