def check(a, b):
    n = len(a)
    for i in range(n):
        if a[i] > b[i]:
            return False
    return True

for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    b = sorted(list(map(int, input().split())))
    if (check(a, b)):
        print("YES")
    else: print("NO")