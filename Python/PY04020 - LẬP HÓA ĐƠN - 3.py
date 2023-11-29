class Receipt:
    def __init__(self, id, name, buyQuantity, price, discount):
        self.id = id
        self.name = name
        self.buyQuantity = buyQuantity
        self.price = price
        self.discount = discount
        self.total = price * buyQuantity - discount
    
    def __str__(self):
        return f"{self.id} {self.name} {self.buyQuantity} {self.price} {self.discount} {self.total}"

a = []
for _ in range(int(input())):
    a.append(Receipt(input(), input(), int(input()), int(input()), int(input())))
a.sort(key = lambda x : -x.total)
for i in a:
    print(i)