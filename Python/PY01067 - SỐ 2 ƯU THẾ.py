N = 30
a = [0] * 31
a[N] = 1
b = []

def add():
    i = 1
    while i <= N and a[i] == 0: i += 1
    d = N - i + 1
    cnt = 0
    s = ""
    for j in range(i, N + 1):
        if a[j] == 2: cnt += 1
        s  = s + str(a[j])
    if cnt > d/2:
        b.append(s)

def generate():
    i = N
    while a[i] == 2:
        a[i] = 0
        i -= 1
    a[i] += 1

while len(b) < 1000:
    add()
    generate()

for _ in range(int(input())):
    for i in range(int(input())):
        print(b[i], end = " ")
    print()