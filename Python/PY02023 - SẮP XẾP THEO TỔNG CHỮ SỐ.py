from sys import stdin
input = stdin.readline

def digitSum(n):
    s = 0
    while n:
        s += n % 10
        n //= 10
    return s

for _ in range(int(input())):
    input()
    a = []
    for i in list(map(int, input().split())):
        a.append((digitSum(i), i))
    a.sort()
    for i in a:
        print(i[1], end = " ")
    print()