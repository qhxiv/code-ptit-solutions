import math

p = "abcdefghijklmnopqrstuvwxyz"
a = {}
for i in range(len(p)):
    a[p[i]] = i

def solve(s):
    sr = s[::-1]
    res = True
    for i in range(1, len(s)):
        if abs(a[s[i]] - a[s[i - 1]]) != abs(a[sr[i]] - a[sr[i - 1]]):
            res = False
            break
    return res

t = int(input())
while t > 0:
    t -= 1
    s = input()
    if (solve(s)):
        print("YES")
    else: print("NO")
