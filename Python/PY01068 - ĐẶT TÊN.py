n, k = map(int, input().split())
a = sorted(set(input().split()))
n = len(a)
b = [0] * (k + 1)
b[0] = -1

def Try(i):
    for j in range(b[i - 1] + 1, n):
        b[i] = j
        if i == k:
            for l in range(1, k + 1):
                print(a[b[l]], end = " ")
            print()
        else:
            Try(i + 1)

Try(1)