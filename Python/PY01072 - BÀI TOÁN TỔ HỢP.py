n, k = list(map(int, input().split()))
a = list(map(int, input().split()))
a = list(dict.fromkeys(a))
n = len(a)
a.sort()

b = [0] * (k + 1)
def Try(i):
    for j in range(b[i - 1] + 1, n + 1):
        b[i] = j
        if i == k:
            for y in range(1, k + 1):
                print(a[b[y] - 1], end = " ")
            print()
        else:
            Try(i + 1)

Try(1)