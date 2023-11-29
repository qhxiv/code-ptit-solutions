class Student:
    num = 0

    def __init__(self, name, g1, g2, g3):
        Student.num += 1
        self.id = "SV"
        if Student.num < 10: self.id += "0"
        self.id += str(Student.num)
        self.name = ""
        for i in name.split():
            self.name += i[0].upper() + i[1:].lower() + " "
        self.grade = (g1*3 + g2*3 + g3*2) / 8
        self.rank = 0
    
    def __str__(self):
        return f"{self.id} {self.name}{(self.grade + 0.001):.2f} {self.rank}"
a = []
for _ in range(int(input())):
    a.append(Student(input(), float(input()), float(input()), float(input())))
a.sort(key = lambda x : (-x.grade, x.id))
a[0].rank = 1
print(a[0])
for i in range(1, len(a)):
    if a[i].grade == a[i - 1].grade:
        a[i].rank = a[i - 1].rank
    else: a[i].rank = i + 1
    print(a[i])