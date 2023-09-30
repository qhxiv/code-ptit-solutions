a = []
for i in range(60):
    for j in range(38):
        for k in range(26):
            n = 2**i * 3**j * 5**k
            if (n <= 1_000_000_000_000_000_000):
                a.append(n)
a.sort()

def find(x):
    l, r = 0, len(a) - 1
    while l <= r:
        m = (l + r) // 2
        if a[m] == x:
            return m;
        elif a[m] > x:
            r = m - 1
        else:
            l = m + 1
    return -1
        

for _ in range(int(input())):
    res = find(int(input()))
    if res == -1:
        print("Not in sequence")
    else:
        print(res + 1)