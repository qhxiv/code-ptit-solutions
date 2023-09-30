t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    for i in range(1000):
        if n % 7 == 0:
            break;
        n += int(str(n)[::-1])
    if n % 7 != 0:
        print(-1)
    else:
        print(n)