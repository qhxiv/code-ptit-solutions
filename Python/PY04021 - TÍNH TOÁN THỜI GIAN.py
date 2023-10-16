class Customer:
    def __init__(self, id, name, start, end):
        self.id = id
        self.name = name
        self.h = int(end[:2]) - int(start[:2])
        self.m = int(end[3:]) - int(start[3:])
        self.s = self.h*60 + self.m
        if self.m < 0:
            self.m = 60 + self.m
            self.h -= 1
    
    def __str__(self):
        return f"{self.id} {self.name} {self.h} gio {self.m} phut"
    
a = []
for _ in range(int(input())):
    a.append(Customer(input(), input(), input(), input()))
a.sort(key = lambda x : -x.s)
print(*a, sep = '\n')