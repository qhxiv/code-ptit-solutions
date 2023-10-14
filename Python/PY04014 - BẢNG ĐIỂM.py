from decimal import ROUND_HALF_UP, Decimal

class Student:
    num = 0
    def __init__(self, name, gradeList):
        Student.num += 1
        self.id = "HS%02d" % Student.num
        self.name = name
        self.grade = 0
        for i in range(10):
            self.grade += gradeList[i]
            if i < 2:
                self.grade += gradeList[i]
        self.grade /= 12
        self.grade = self.grade.quantize(Decimal('0.1'), ROUND_HALF_UP)
        if self.grade >= 9:
            self.rank = "XUAT SAC"
        elif self.grade >= 8:
            self.rank = "GIOI"
        elif self.grade >= 7:
            self.rank = "KHA"
        elif self.grade >= 5:
            self.rank = "TB"
        else:
            self.rank = "YEU"
    
    def __str__(self):
        return "%s %s %.1f %s" % (self.id, self.name, self.grade, self.rank)
                

arr = []
for _ in range(int(input())):
    arr.append(Student(input(), list(map(Decimal, input().split()))))
arr.sort(key = lambda x: -x.grade)
for i in arr:
    print(i)