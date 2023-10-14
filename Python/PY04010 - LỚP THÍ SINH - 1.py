class Student:
    def __init__(self, name, dob, g1, g2, g3):
        self.name = name
        self.dob = dob
        self.grade = g1 + g2 + g3

    def __str__(self):
        return self.name + " " + self.dob + " " + "%.1f" % self.grade

student1 = Student(input(), input(), float(input()), float(input()), float(input()))
print(student1)