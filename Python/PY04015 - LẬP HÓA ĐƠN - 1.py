class Customer:
    num = 0
    def __init__(self, name, oldI, newI):
        Customer.num += 1
        self.id = "KH%02d" % Customer.num
        self.name = name
        w = newI - oldI
        if w < 51:
            fee = 1.02
        elif w < 101:
            fee = 1.03
        else:
            fee = 1.05
        self.waterBill = 0
        self.waterBill += min(w, 50) * 100
        w -= 50
        if w > 0:
            self.waterBill += min(w, 50) * 150
            w -= 50
            if w > 0:
                self.waterBill += w * 200
        self.waterBill = round(self.waterBill * fee)

    def __str__(self):
        return "%s %s %d" % (self.id, self.name, self.waterBill)

arr = []
for _ in range(int(input())):
    arr.append(Customer(input(), int(input()), int(input())))
arr.sort(key=lambda x: -x.waterBill)
for i in arr:
    print(i)