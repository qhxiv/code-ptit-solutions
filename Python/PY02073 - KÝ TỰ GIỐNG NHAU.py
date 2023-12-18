for _ in range(int(input())):
    n = int(input())
    x, y, z = map(int, input().split())
    dp = [0] * (n + 2)
    dp[1] = x
    for i in range(2, n + 2):
        dp[i] = dp[i - 1] + x
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i//2] + z)
        dp[i - 1] = min(dp[i - 1], dp[i] + y)
    print(dp[n])