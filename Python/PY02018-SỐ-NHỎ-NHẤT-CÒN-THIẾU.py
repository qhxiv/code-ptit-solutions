n = int(input())
dic = {}
m = -1
for i in list(map(int, input().split())):
    m = max(m, i)
    if dic.get(i) == None:
        dic[i] = 1

f = True
for i in range(1, m + 1):
    if (dic.get(i) == None):
        f = False
        print(i)
        break;

if f:
    print(m + 1)