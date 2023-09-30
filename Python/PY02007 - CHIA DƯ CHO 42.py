a = []
se = set()
while (len(a) < 10):
    a += list(map(int, input().split()))
for i in a:
    se.add(i % 42)
print(len(se))