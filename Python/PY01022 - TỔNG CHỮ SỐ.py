n = input()
cnt = 0
while len(n) > 1:
    tmp = 0
    for i in n:
        tmp += ord(i) - ord('0')
    n = str(tmp)
    cnt += 1
print(cnt)