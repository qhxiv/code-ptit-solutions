class Applicant:
    def __init__(self, num, name, g1, g2):
        self.id = "TS0" + str(num)
        self.name = name
        if g1 > 10: g1 /= 10
        if g2 > 10: g2 /= 10
        self.avg = (g1 + g2) / 2
        if self.avg < 5: self.rank = 'TRUOT'
        elif self.avg < 8: self.rank = 'CAN NHAC'
        elif self.avg < 9.5: self.rank = 'DAT'
        else: self.rank = 'XUAT SAC'
    
    def __str__(self):
        return "{} {} {:.2f} {}".format(self.id, self.name, self.avg, self.rank)

a = []
n = int(input())
for i in range(n):
    name = input()
    g1 = float(input())
    g2 = float(input())
    a.append(Applicant(i + 1, name, g1, g2))

a.sort(key = lambda x : -x.avg)
print(*a, sep = '\n')