list = ['.', '?', '!']

try:
    f = True
    while True:
        for i in input().split():
            if i[-1] in list:
                i = i[:len(i) - 1]
                f2 = True
            else:
                f2 = False
            if f:
                print(f"{i[:1].upper()}{i[1:].lower()}", end = ' ')
            else:
                print(f"{i.lower()}", end = ' ')
            f = f2
            if f:
                print()
except:
    pass