def check(a, b):
    n = len(a)
    for i in range(1, n):
        if (abs(ord(a[i]) - ord(a[i - 1])) != abs(ord(b[i]) - ord(b[i - 1]))):
            return False
    return True

for _ in range(int(input())):
    s = input()
    if (check(s, s[::-1])):
        print("YES")
    else:
        print("NO")