from sys import stdin
input = stdin.readline

above, below = 0, 0

n = int(input())
for i in range(n):
    a = list(map(int, input().split()))
    for j in range(n):
        if j > i:
            above += a[j]
        elif j < i:
            below += a[j]

diff = abs(above - below)
k = int(input())
if diff <= k:
    print("YES")
else:
    print("NO")
print(diff)