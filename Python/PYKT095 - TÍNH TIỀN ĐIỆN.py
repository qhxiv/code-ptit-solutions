class Customer:
    num = 0
    def __init__(self, name, type, start, end):
        Customer.num += 1
        self.id = "KH"
        if Customer.num < 10: self.id += "0"
        self.id += str(Customer.num)
        self.name = ""
        for i in name.split():
            self.name += i[0].upper() + i[1:].lower() + " "
        
        use = end - start
        quota = 100
        if type == "B": quota = 500
        elif type == "C": quota = 200
        self.underQuota = min(quota, use) * 450
        self.exceedQuota = max(0, use - quota) * 1000
        self.vat = self.exceedQuota // 20
        self.total = self.underQuota + self.exceedQuota + self.vat
    
    def __str__(self):
        return "{} {}{} {} {} {}".format(self.id, self.name, self.underQuota, self.exceedQuota, self.vat, self.total)

a = []
for _ in range(int(input())):
    name = input()
    t = input().split()
    a.append(Customer(name, t[0], int(t[1]), int(t[2])))
a.sort(key = lambda x : -x.total)
for i in a:
    print(i)