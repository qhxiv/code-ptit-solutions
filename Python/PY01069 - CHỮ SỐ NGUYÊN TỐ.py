n = None
ok = True
a = [-1] * 20
b = [2, 3, 5, 7]

def check():
    c0 = c1 = c2 = c3 = False
    for i in a:
        if i == 0: c0 = True
        elif i == 1: c1 = True
        elif i == 2: c2 = True
        elif i == 3: c3 = True
    if a[n] != 0 and c0 and c1 and c2 and c3:
        k = 1
        while k <= n and a[k] == -1:
            k += 1
        for j in range(k, n + 1):
            print(b[a[j]], end = "")
        print()

def generate():
    global ok
    i = n
    while i > 0 and a[i] == 3:
        a[i] = 0
        i -= 1
    if i == 0: ok = False
    else: a[i] += 1

n = int(input())
a[n] = 0
while ok:
    check()
    generate()