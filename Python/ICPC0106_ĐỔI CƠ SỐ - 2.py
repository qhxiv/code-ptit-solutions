import math

def solve(s):
    s = s[::-1]
    res = 0
    for i in range(len(s)):
        res += int(s[i]) * int(math.pow(2, i))
    switcher = {
        10: 'A',
        11: 'B',
        12: 'C',
        13: 'D',
        14: 'E',
        15: 'F'
    }
    return switcher.get(res, str(res))

t = int(input())
while t > 0:
    t -= 1
    b = int(input())
    s = input()
    if b == 2:
        print(s)
        continue
    n = int(math.log(b, 2))
    res = ""
    while len(s) > 0:
        tmp = s[-n:]
        res = solve(tmp) + res
        if (len(tmp) < n):
            s = ""
        else:
            s = s[:len(s) - n]
    print(res)