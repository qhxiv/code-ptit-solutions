import math, sys
import array as arr

input = sys.stdin.readline

p = arr.array("i", [0] * 2000001)
for i in range(2, math.floor(math.sqrt(2000000)) + 1):
    if p[i] == 0:
        p[i] = i
        for j in range(i * i, 2000001, i):
            if p[j] == 0:
                p[j] = i

for i in range(4, 2000001):
    p[i] += p[i // p[i]] if p[i] != 0 else i

res = 0
for _ in range(int(input())):
    res += p[int(input())]
sys.stdout.write(str(res))