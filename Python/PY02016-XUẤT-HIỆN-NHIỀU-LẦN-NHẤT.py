for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    dic = {}
    for i in a:
        if (dic.get(i) != None):
            dic[i] += 1
        else:
            dic[i] = 1
    
    res = 999999999999999999
    for i in dic.keys():
        if dic[i] > n // 2 and i < res:
            res = i
    if res == 999999999999999999:
        print("NO")
    else:
        print(res)