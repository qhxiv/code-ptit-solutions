class Pair:
    def __init__(self, first, second):
        self.first = first
        self.second = second

n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
l = []
for i in range(n):
    l.append(Pair(i, b[i] - a[i]))
l.sort(key = lambda x: -x.second)
res = 0
for i in range(k):
    res += a[l[i].first]
for i in range(k, n):
    res += min(a[l[i].first], b[l[i].first])
print(res)