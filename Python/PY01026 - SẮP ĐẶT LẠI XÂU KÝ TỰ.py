def solve(s1, s2):
    d1 = {}
    d2 = {}
    for i in s1:
        if d1.get(i) == None:
            d1[i] = 0
        d1[i] += 1
    for i in s2:
        if d2.get(i) == None:
            d2[i] = 0
        d2[i] += 1
    for i in d1.keys():
        if d1.get(i) != d2.get(i):
            return "NO"
    return "YES"


for _ in range(int(input())):
    print(f"Test {_ + 1}: ", end = "")
    s1 = input()
    s2 = input()
    print(solve(s1, s2))