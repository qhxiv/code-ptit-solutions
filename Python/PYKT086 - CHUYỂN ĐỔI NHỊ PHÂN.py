file = open("DATA.in", "r")
for _ in range(int(file.readline())):
    b = int(file.readline())
    s = file.readline()

    if b == 2: print(s, end = "")
    else:
        s = int(s, 2)
        m = 0
        t = b
        while t <= s:
            m += 1
            t *= b
        t //= b
        res = ""
        for i in range(m, -1, -1):
            temp = s // t
            s -= t * temp
            t //= b

            if (temp < 10): res += str(temp)
            else: res += chr(ord("A") + temp - 10)
        print(res)