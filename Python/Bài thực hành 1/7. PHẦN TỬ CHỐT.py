for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if (n < 3):
        print(0)
        continue

    left = [0] * n
    right = [100000000000] * n
    left[0] = a[0]
    right[n - 1] = a[n - 1]
    for i in range(1, n):
        left[i] = max(left[i - 1], a[i])
    for i in range(n - 2, -1, -1):
        right[i] = min(right[i + 1], a[i])

    res = 0
    for i in range(n):
        if (i == 0 and a[i] < right[i + 1]):
            res += 1
        elif (i == n - 1 and a[i] >= left[i - 1]):
            res += 1
        elif (a[i] >= left[i - 1] and a[i] < right[i + 1]):
            res += 1
    print(res)