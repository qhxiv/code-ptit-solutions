def solve(s):
    if (s[0] == s[1]):
        return False
    n = len(s)
    for i in range(2, n):
        if (s[i] != s[i - 2]):
            return False
    return True

t = int(input())
while t > 0:
    t -= 1
    if (solve(input())):
        print("YES")
    else:
        print("NO")
