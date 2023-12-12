input()
n = -1
se = set()
try:
    while True:
        for i in map(int, input().split()):
            n = max(n, i)
            se.add(i)
except:
    pass
f = True
i = 1
while i <= n:
    if not se.__contains__(i):
        print(i)
        f = False
    i += 1
if f: print("Excellent!")