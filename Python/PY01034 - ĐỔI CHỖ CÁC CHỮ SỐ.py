for _ in range(int(input())):
    s = []
    for i in input():
        s.append(int(i))
    n = len(s)
    
    f = 0
    for i in range(1, n):
        if s[i] < s[i - 1] and not (s[i] == 0 and i == 1):
            f = i
    if f == 0:
        print(-1)
    else:
        rec = s[f]
        m = f
        for i in range(f, n):
            if s[i] < s[f - 1] and rec < s[i]:
                rec = s[i]
                m = i
        s[m], s[f - 1] = s[f - 1], s[m]
        for i in s:
            print(i, end = "")
        print()