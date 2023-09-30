class CaThi:
    num = 0

    def __init__(self, date, hour, room):
        CaThi.num += 1
        self.ID = "C"
        tmp = str(CaThi.num)
        if (len(tmp) == 1):
            self.ID += "00" + tmp
        elif (len(tmp) == 2):
            self.ID += "0" + tmp
        else:
            self.ID += tmp
        self.date = date
        self.tdate = date[6:] + date[3:5] + date[:2]
        self.hour = hour
        self.room = room

    def __str__(self):
        return self.ID + " " + self.date + " " + self.hour + " " + self.room

inp = open("CATHI.in", "r")
a = inp.readlines()
tmp = lambda x : x[:len(x) - 1] if x[len(x) - 1] == '\n' else x
a = list(map(tmp, a))

n = a[0]
b = []
i = 1
while (i < len(a)):
    b.append(CaThi(a[i], a[i + 1], a[i + 2]))
    i += 3

b.sort(key = lambda x: (x.tdate, x.hour, x. ID))
for i in b:
    print(i)