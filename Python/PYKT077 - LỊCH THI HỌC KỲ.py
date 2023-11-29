from datetime import datetime

monHoc = {}

class CaThi:
    num = 0

    def __init__(self, maMon, ngayThi, gioThi, nhomThi):
        CaThi.num += 1
        self.id = "T"
        if CaThi.num < 10: self.id += "00"
        elif CaThi.num < 100: self.id += "0"
        self.id += str(CaThi.num)
        self.maMon = maMon
        self.tenMon = monHoc[maMon]
        self.ngayThi = ngayThi
        self.gioThi = gioThi
        self.nhomThi = nhomThi
        self.dateTime = datetime(int(ngayThi[-4:]), int(ngayThi[3:5]), int(ngayThi[:2]), hour = int(gioThi[:2]), minute = int(gioThi[-2:]))

    def __str__(self):
        return f"{self.id} {self.maMon} {self.tenMon} {self.ngayThi} {self.gioThi} {self.nhomThi}"

n, m = map(int, input().split())
for _ in range(n):
    key = input()
    val = input()
    monHoc[key] = val

a = []
for _ in range(m):
    tmp = input().split()
    a.append(CaThi(tmp[0], tmp[1], tmp[2], tmp[3]))
a.sort(key = lambda x : x.dateTime)
for i in a:
    print(i)