t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    j = int(n % 2)
    if (j == 0):
        j = 2
    s = 0
    for i in range(j, n + 1, 2):
        s += 1 / i
    print("%.6f" % s)