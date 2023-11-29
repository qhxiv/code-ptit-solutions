for _ in range(int(input())):
    s = input()
    if len(s) <= 100:
        print(s)
    else:
        s = s[:100]
        i = 99
        while s[i] != " ":
            i -= 1
        print(s[:i])