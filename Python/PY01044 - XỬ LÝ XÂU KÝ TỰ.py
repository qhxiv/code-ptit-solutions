s1 = set()
for i in input().split():
    s1.add(i.lower())

s2 = set()
for i in input().split():
    s2.add(i.lower())

union = []
intersection = []

for i in s1:
    if s2.__contains__(i):
        intersection.append(i)
intersection.sort()

for i in s1:
    s2.add(i)
for i in s2:
    union.append(i)
union.sort()

for i in union:
    print(i, end = " ")
print()
for i in intersection:
    print(i, end = " ")