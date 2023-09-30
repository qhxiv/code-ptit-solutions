import math

t = int(input())
while t > 0:
    t -= 1
    a = input()
    b = int(a[::-1])
    a = int(a)

    if (math.gcd(a, b) == 1):
        print("YES")
    else:
        print("NO")