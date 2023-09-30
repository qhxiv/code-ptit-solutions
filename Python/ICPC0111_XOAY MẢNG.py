t = int(input())
while t > 0:
    t -= 1
    b = list(map(int, input().split()))
    n = b[0]
    d = b[1]
    a = list(map(int, input().split()))
    for i in range(d, n):
        print(a[i], end = ' ')
    for i in range(d):
        print(a[i], end = ' ')
    print()