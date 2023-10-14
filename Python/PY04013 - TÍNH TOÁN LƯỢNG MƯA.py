def calc(start, end):
    s = int(start[0:2]) * 60 + int(start[3:5])
    e = int(end[0:2]) * 60 + int(end[3:5])
    return e - s

class Rain:
    num = 0
    def __init__(self, name, time, value):
        Rain.num += 1
        self.id = "T%02d" % Rain.num
        self.name = name
        self.time = time
        self.value = value
    
    def getAvg(self):
        return self.value / (self.time / 60)
    
    def __str__(self):
        return self.id + " " + self.name + " %.2f" % self.getAvg()

d = {}
for _ in range(int(input())):
    name = input()
    start = input()
    end = input()
    time = calc(start, end)
    value = int(input())
    if d.get(name) == None:
        d[name] = Rain(name, time, value)
    else:
        d[name].time += time
        d[name].value += value

l = []
for i in d.keys():
    l.append(d[i])

l.sort(key = lambda x: x.id)
for i in l:
    print(i)