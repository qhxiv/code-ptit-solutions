class Student:
    def __init__(self, name, line):
        self.name = name
        self.ac, self.submit = map(int, line.split())
    
    def __str__(self):
        return "{} {} {}".format(self.name, self.ac, self.submit)

a = []
for _ in range(int(input())):
    a.append(Student(input(), input()))
a.sort(key = lambda x : (-x.ac, x.submit))
print(*a, sep = '\n')