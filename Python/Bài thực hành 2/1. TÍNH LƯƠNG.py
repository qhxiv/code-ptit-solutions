def calc(r, y):
    if r == "A":
        if y >= 1 and y <= 3:
            return 10
        if y >= 4 and y <= 8:
            return 12
        if y >= 9 and y <= 15:
            return 14
        if y >= 16:
            return 20
    elif r == "B":
        if y >= 1 and y <= 3:
            return 10
        if y >= 4 and y <= 8:
            return 11
        if y >= 9 and y <= 15:
            return 13
        if y >= 16:
            return 26
    elif r == "C":
        if y >= 1 and y <= 3:
            return 9
        if y >= 4 and y <= 8:
            return 10
        if y >= 9 and y <= 15:
            return 12
        if y >= 16:
            return 14
    else:
        if y >= 1 and y <= 3:
            return 8
        if y >= 4 and y <= 8:
            return 9
        if y >= 9 and y <= 15:
            return 11
        if y >= 16:
            return 13

dpms = {}
for _ in range(int(input())):
    s = input()
    dpms[s[0:2]] = s[3:]

class Employee:
    def __init__(self, ID, name, baseSalary, dayOfWork):
        self.ID = ID
        self.name = name
        self.department = dpms[ID[-2:]]

        r = ID[0]
        y = int(ID[1:3])
        self.salary = baseSalary * 1000 * dayOfWork * calc(r, y)
        
    def __str__(self):
        return self.ID + " " + self.name + " " + self.department + " " + str(self.salary)

for _ in range(int(input())):
    print(Employee(input(), input(), int(input()), int(input())))