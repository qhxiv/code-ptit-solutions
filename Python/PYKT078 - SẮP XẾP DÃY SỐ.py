for _ in range(int(input())):
    n, m = map(int, input().split())
    neg, pos = [], []
    max_val = int(-1e9 - 10)
    for i in map(int, input().split()):
        if i < 0: neg.append(i)
        else: pos.append(i)
        max_val = max(max_val, i)
    if len(neg) == 0 and m < 0:
        print(m, end = " ")
    for i in neg:
        if i == max_val and m < 0:
            print(m, end = " ")
        print(i, end = " ")
    for i in pos:
        if i == max_val and m >= 0:
            print(m, end = " ")
        print(i, end = " ")
    if len(pos) == 0 and m > 0:
        print(m, end = "")
    print()