above, below = 0, 0

n = int(input())
for i in range(n):
    a = list(map(int, input().split()))
    for j in range(n):
        if j < n - i - 1:
            above += a[j]
        elif j > n - i - 1:
            below += a[j]

k = int(input())
diff = abs(above - below)
if diff > k:
    print('NO')
else: print('YES')
print(diff)