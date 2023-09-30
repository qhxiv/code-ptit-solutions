t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    if n > 10:
        n = str(n)
        m = n[1]
        l = len(n)
        if m < '4':
            print(n[0], end = '')
            for i in range(l - 1):
                print(0, end = '')
        elif m == '4':
            i = 2
            check = False
            while i < l:
                if n[i] < '4':
                    break
                elif n[i] > '4':
                    check = True
                    break
                i += 1
            if check:
                print(int(n[0]) + 1, end = '')
            else:
                print(n[0], end = '')
            for i in range(l - 1):
                print(0, end = '')
        else:
            print(int(n[0]) + 1, end = '')
            for i in range(l - 1):
                print(0, end = '')
        n = int(n)
    else: print(n, end = '')
    print("")