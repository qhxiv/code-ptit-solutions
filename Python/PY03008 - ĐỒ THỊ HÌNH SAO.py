def solve(cnt):
    n = len(cnt) - 1
    f = False
    for i in range(1, n + 1):
        if cnt[i] != 1 and cnt[i] != n - 1:
            return "No"
        if f and cnt[i] != 1:
            return "No"
        if not f and cnt[i] == n - 1:
            f = True
    return "Yes"

n = int(input())
cnt = [0] * (n + 1)
n -= 1
while n > 0:
    n -= 1
    a, b = map(int, input().split())
    cnt[a] += 1
    cnt[b] += 1
print(solve(cnt))