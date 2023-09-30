l = [".", "!", "?"]

try:
    while True:
        s = input().strip().lower()
        if s[len(s) - 1] in l:
            c = s[len(s) - 1]
            s = s[:len(s) - 1]
        else:
            c = "."
        s = s.strip()
        
        s = list(s.split())
        f = s[0]
        f = f[:1].upper() + f[1:]
        s[0] = f
        print(*s, end = "")
        print(c)
except:
    pass