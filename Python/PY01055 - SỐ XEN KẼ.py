def check(n):
    if n[0] == n[1]:
        return False
    d = len(n)
    if d & 1 == 0:
        return False
    for i in range(2, d, 2):
        if (n[i] != n[i - 2]):
            return False
    return True

for _ in range(int(input())):
    if (check(input())):
        print("YES")
    else:
        print("NO")