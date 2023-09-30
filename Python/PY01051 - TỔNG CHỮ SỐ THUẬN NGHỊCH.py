def check(s):
    l = 0
    r = len(s) - 1
    while l < r:
        if s[l] != s[r]: return False
        l += 1
        r -= 1
    return True

for _ in range(int(input())):
    n = input()
    s = 0
    for i in n:
        s += int(i)
    s = str(s)
    if (len(s) == 1 or not check(s)):
        print("NO")
    else:
        print("YES")