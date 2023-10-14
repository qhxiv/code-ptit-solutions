from sys import stdin
input = stdin.readline

def digitProduct(n):
    p = 1
    while n:
        p *= n % 10
        n //= 10
    return p

for _ in range(int(input())):
    input()
    a = []
    for i in list(map(int, input().split())):
        a.append((digitProduct(i), i))
    a.sort()
    for i in a:
        print(i[1], end = " ")
    print()