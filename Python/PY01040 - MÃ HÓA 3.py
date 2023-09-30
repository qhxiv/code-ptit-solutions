def move(c, val):
    tmp = ord(c) + val
    if (tmp > ord("Z")):
        tmp = tmp - ord("Z") + ord("A") - 1
    return chr(tmp)

def rotate(s):
    val = 0
    for i in s:
        val += ord(i) - ord("A")
    val %= 26
    res = ""
    for i in s:
        res += move(i, val)
    return res

def merge(l, r):
    res = ""
    n = len(l)
    for i in range(n):
        res += move(l[i], ord(r[i]) - ord("A"))
    return res

def drm(s):
    n = len(s)
    l = s[:n//2]
    r = s[n//2:]

    l = rotate(l)
    r = rotate(r)
    return merge(l, r)

for _ in range(int(input())):
    print(drm(input()))