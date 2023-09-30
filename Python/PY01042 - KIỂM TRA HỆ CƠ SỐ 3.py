def solve(s):
    for i in s:
        if (i != "0" and i != "1" and i != "2"):
            return False
    return True

t = int(input())
while t > 0:
    t -= 1
    s = input()
    if (solve(s)):
        print("YES")
    else:
        print("NO")