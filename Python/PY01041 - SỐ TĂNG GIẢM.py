def solve(m):
    n = len(m)
    if (n < 3):
        return False
    st = 0
    for i in range(1, n):
        if (int(m[i]) == int(m[i - 1])):
            return False
        if (st == 0):
            if (int(m[i]) < int(m[i - 1])):
                st = 1
        elif (st == 1):
            if (int(m[i]) > int(m[i - 1])):
                return False
    return st == 1
            

t = int(input())
while t > 0:
    t -= 1
    n = input()
    if (solve(n)):
        print("YES")
    else:
        print("NO")