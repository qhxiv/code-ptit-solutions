s = [".", "+", "-", "*"]

n, m = list(map(int, input().split()))
a = list(map(int, input().split()))

b = ["."] * (n)
def check():
    res = a[0]
    i = 1
    if (b[1] == "*"):
        while i < n and b[i] == "*":
            res *= a[i]
            i += 1
    while i < n:
        if i == n - 1:
            if b[i] == "+":
                res += a[i]
            else:
                res -= a[i]
        else:
            if b[i + 1] == "*":
                j = i + 1
                tmp = a[i]
                while j < n and b[j] == "*":
                    tmp *= a[j]
                    j += 1
                if (b[i] == "+"):
                    res += tmp
                else:
                    res -= tmp
                i = j - 1
            else:
                if (b[i] == "+"):
                    res += a[i]
                else:
                    res -= a[i]
        i += 1
    if (res == m):
        res = str(a[0]) if a[0] > 0 else "(%d)" % a[0]
        for i in range(1, n):
            res += b[i] + (str(a[i]) if a[i] > 0 else "(%d)" % a[i])
        res += "=" + str(m)
        b[0] = "o"
        print(res)

def Try(i):
    for j in range(1, 4):
        b[i] = s[j]
        if (i == n - 1):
            check()
        else:
            Try(i + 1)

Try(1)
if b[0] == ".":
    print("IMPOSSIBLE")