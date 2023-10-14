from sys import stdin, stdout
input, print = stdin.readline, stdout.write

n = int(input())
min_val = 11
max_val = -1
a = list(map(float, input().split()))
for i in a:
    min_val = min(min_val, i)
    max_val = max(max_val, i)

s, cnt = 0, 0
for i in a:
    if (i == min_val or i == max_val):
        continue
    s += i
    cnt += 1

print("%.2f" % (s / cnt))