import math

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    m = n;
    tmp = 0
    while n > 0:
        tmp += math.factorial(n % 10)
        n /= 10
        n = int(n)
    if (tmp == m):
        print("Yes")
    else: print("No")