cnt = 0
f = True
for _ in range(int(input())):
    s = input()
    if s == "":
        print(cnt)
        f = True
        cnt = 0
    elif f:
        f = False
        print(f"{s}: ", end = "")
    else:
        cnt += 1
print(cnt)