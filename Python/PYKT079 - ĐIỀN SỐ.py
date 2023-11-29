for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split()))
    max_val = -10
    min_val = 10000
    for i in a:
        max_val = max(max_val, i)
        min_val = min(min_val, i)
    n = len(a)
    print(max_val - min_val + 1 - n)