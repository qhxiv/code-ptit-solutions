inp = open("CONTACT.in", "r")
a = inp.readlines()
tmp = lambda x : x[:len(x) - 1] if x[len(x) - 1] == '\n' else x
a = list(map(tmp, a))

se = set()
for s in a:
    n = len(s)
    i = 0
    res = ""

    while (s[i] != "@"):
        i += 1
    se.add(s[:i].lower() + "@" + s[i + 1:].lower())

for i in sorted(se):
    print(i)