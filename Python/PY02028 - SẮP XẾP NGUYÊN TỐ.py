import math


def nt(n):
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return n > 1

n = int(input())
a = list(map(int, input().split()))
b = []
for i in a:
    if nt(i):
        b.append(i)
b.sort()
j = 0
for i in a:
    if nt(i):
        print(b[j], end = " ")
        j += 1
    else:
        print(i ,end = " ")