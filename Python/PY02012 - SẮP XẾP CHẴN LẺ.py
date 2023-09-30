n = int(input())
a = []
while (True):
    x = list(map(int, input().split()))
    a += x
    if (len(a) == n):
        break;

odd = []
even = []

for i in a:
    if (i % 2 == 0):
        even.append(i)
    else:
        odd.append(i)

odd.sort(reverse=True)
even.sort()

i, j = 0, 0
for x in a:
    if (x % 2 == 0):
        print(even[i], end = ' ')
        i += 1
    else:
        print(odd[j], end = ' ')
        j += 1