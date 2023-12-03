class mt:
    def __init__(self, id, name, htt):
        self.id = id
        self.name = name
        self.htt = htt
    
    def __str__(self):
        return f"{self.id} {self.name} {self.htt}"

a = []
for _ in range(int(input())):
    a.append(mt(input(), input(), input()))
a.sort(key=lambda x: x.id)
for i in a: print(i)