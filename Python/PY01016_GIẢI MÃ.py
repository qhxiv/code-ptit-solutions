t = int(input())
while t > 0:
    t -= 1
    s = input()
    for i in range(len(s)):
        if (s[i] >= '1' and s[i] <= '9'):
            for j in range(int(s[i])):
                print(s[i - 1], end = '')
    print()