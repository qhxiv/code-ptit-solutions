class Cuaro:
    def __init__(self, ten, donVi, thoiDiem):
        self.ten = ten
        self.id = ""
        for i in donVi.split():
            self.id += i[0]
        for i in ten.split():
            self.id += i[0]
        self.donVi = donVi
        h = float(thoiDiem[0]) + float(thoiDiem[2:]) / 60 - 6
        self.vanToc = 120 / h
    
    def __str__(self):
        return f"{self.id} {self.ten} {self.donVi} {round(self.vanToc)} Km/h"

a = []
for _ in range(int(input())):
    a.append(Cuaro(input().strip(), input().strip(), input().strip()))

a.sort(key = lambda x : -x.vanToc)
for i in a:
    print(i)