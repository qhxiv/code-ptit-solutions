import math

def solve(str):
    if (str[0] == "0"):
        check = True
        tmp = -1
        for i in range(len(str)):
            if (i != '0'):
                check = False
                tmp = i
                break
        if check:
            return 0
        else:
            return int(str[tmp:len(str) - 1])
    return int(str)

t = int(input())
while t:
    t -= 1
    s = input()
    str = ""
    m = 10**10
    for i in s:
        if i >= "0" and i <= "9":
            str += i
        elif (len(str) > 0):
            m = min(m, solve(str))
            str = ""
    if len(str) > 0:
        m = min(m, solve(str))
    print(m)