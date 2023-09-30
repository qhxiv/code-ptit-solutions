def check(s):
    s = s.lower()
    if (len(s) < 3 or s[-3:] != ".py"):
        return False
    for i in s:
        if (ord(i) < ord("a") or ord(i) > ord("z")) and i != "." and i != "_":
            return False
    return True

if (check(input())):
    print("yes")
else:
    print("no")