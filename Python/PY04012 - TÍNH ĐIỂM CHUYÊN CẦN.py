class Student:
    def __init__(self, id, name, className):
        self.id = id
        self.name = name
        self.className = className
        self.grade = ""
    
    def setGrade(self, string):
        s = 10
        for i in string:
            if i == "m": s -= 1
            elif i == "v": s -= 2
        if s < 0: s = 0
        res = str(s)
        if s == 0: res += " KDDK"
        self.grade = res
    
    def __str__(self):
        return f"{self.id} {self.name} {self.className} {self.grade}"

d = {}
n = int(input())
for i in range(n):
    id = input()
    name = input()
    className = input()
    d[id] = Student(id, name, className)

for i in range(n):
    id, string = input().split()
    d[id].setGrade(string)

for i in d.keys():
    print(d[i])