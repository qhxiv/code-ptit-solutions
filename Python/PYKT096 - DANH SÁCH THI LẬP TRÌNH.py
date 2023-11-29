teams = []

class Contestant:
    num = 0
    
    def __init__(self, name, team):
        Contestant.num += 1
        self.id = "C"
        if Contestant.num < 10: self.id += "00"
        elif Contestant.num < 100: self.id += "0"
        self.id += str(Contestant.num)
        self.name = name
        self.team = teams[int(team[-2:]) - 1][0]
        self.school = teams[int(team[-2:]) - 1][1]

    def __str__(self):
        return "{} {} {} {}".format(self.id, self.name, self.team, self.school)

for _ in range(int(input())):
    team = input()
    school = input()
    teams.append((team, school))

a = []
for _ in range(int(input())):
    a.append(Contestant(input(), input()))
a.sort(key = lambda x : x.name)
for i in a:
    print(i)