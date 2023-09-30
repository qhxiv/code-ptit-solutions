inp = open("DATA.in", "r")
sl = inp.readlines()
a = []
MAX = 2**31 - 1
for s in sl:
    s = s.split()
    for i in s:
        try:
            n = int(i)
            if n > MAX or n < -MAX - 1:
                a.append(str(n))
        except:
            a.append(i)

print(*sorted(a))