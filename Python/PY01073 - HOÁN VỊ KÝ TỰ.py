s = input()
n = len(s)

a = [0] * n
used = [False] * n
def Try(i):
    for j in range(n):
        if not used[j]:
            used[j] = True
            a[i] = j
            if i == n - 1:
                for y in range(n):
                    print(s[a[y]], end = "")
                print()
            else:
                Try(i + 1)
            used[j] = False

Try(0)