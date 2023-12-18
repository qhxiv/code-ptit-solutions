n = a = cnt = ok = res = None

def add():
    global a, cnt, ok, res
    res.append(a[1:cnt + 1])

def generate():
    global a, cnt, ok
    i = cnt
    while i >= 0 and a[i] == 1:
        i -= 1
    if i == 0:
        ok = False
    else:
        a[i] -= 1
        d = cnt - i + 1
        cnt = i
        q = d // a[i]
        r = d % a[i]
        while q > 0:
            q -= 1
            cnt += 1
            a[cnt] = a[i]
        if r > 0:
            cnt += 1
            a[cnt] = r

for _ in range(int(input())):
    n = int(input())
    a = [0] * (n + 1)
    a[1] = n
    cnt = 1
    ok = True
    res = []
    while ok:
        add()
        generate()
    print(len(res))
    for x in res:
        print("(", end = "")
        print(*x, sep=" ", end = "")
        print(")", end = " ")
    print()