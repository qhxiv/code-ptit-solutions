import math
from sys import stdin
input = stdin.readline

def check(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

n, m = list(map(int, input().split()))
for i in range(n):
    for j in list(map(int, input().split())):
        if check(j):
            print(1, end = " ")
        else:
            print(0, end = " ")
    print()