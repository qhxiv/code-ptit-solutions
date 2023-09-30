def calc(region, folk):
    res = 0
    if region == 1: res += 1.5
    elif region == 2: res += 1
    if folk != "Kinh": res += 1.5
    return res

class Contestant:
    cnt = 0

    def __init__(self, name, grade, folk, region):
        Contestant.cnt += 1
        self.ID = "TS"
        if Contestant.cnt < 10:
            self.ID += "0"
        self.ID += str(Contestant.cnt)

        self.name = ""
        for i in name.split():
            self.name += i[0].upper() + i[1:].lower() + " "
        
        self.grade = grade + calc(region, folk)
        self.passOrNot = "Truot" if self.grade < 20.5 else "Do"
    
    def __str__(self):
        return self.ID + " " + self.name + "%.1f" % self.grade + " " + self.passOrNot

a = []
for _ in range(int(input())):
    a.append(Contestant(input(), float(input()), input(), int(input())))

a.sort(key = lambda x : (-x.grade, x.ID))
for i in a:
    print(i)