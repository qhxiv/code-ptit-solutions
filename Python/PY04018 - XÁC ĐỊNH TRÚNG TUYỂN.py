bonus = [2, 1.5, 1, 0]

class GiaoVien:
    num = 0

    def __init__(self, ten, ma, tin, chuyen):
        GiaoVien.num += 1
        self.id = "GV"
        if GiaoVien.num < 10: self.id += "0"
        self.id += str(GiaoVien.num)
        
        self.ten = ten
        t = ma[0]
        if t == "A": self.monHoc = "TOAN"
        elif t == "B": self.monHoc = "LY"
        else: self.monHoc = "HOA"
        self.diem = tin * 2 + chuyen + bonus[int(ma[1]) - 1]
        if self.diem >= 18: self.kq = "TRUNG TUYEN"
        else: self.kq = "LOAI"
    
    def __str__(self):
        return f"{self.id} {self.ten} {self.monHoc} {round(self.diem, 1)} {self.kq}"

a = [] 
for _ in range(int(input())):
    a.append(GiaoVien(input(), input(), float(input()), float(input())))
a.sort(key = lambda x : -x.diem)
for i in a:
    print(i)