def check(s):
    a = s.split(".")
    if len(a) != 4: return False
    for i in a:
        if not i.isnumeric():
            return False
        else:
            n = int(i)
            if n < 0 or n > 255:
                return False
    return True

for _ in range(int(input())):
    if (check(input())): print("YES")
    else: print("NO")