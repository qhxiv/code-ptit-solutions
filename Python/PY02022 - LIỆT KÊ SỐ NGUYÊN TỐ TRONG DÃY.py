import math
from sys import stdin, stdout
input = stdin.readline

def check(n):
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

input()
dic = {}
a = list(map(int, input().split()))
for i in a:
    if (check(i)):
        dic[i] = 1 if dic.get(i) == None else dic[i] + 1

for i in a:
    if (dic.get(i) != None):
        print(i, dic[i])
        del dic[i]