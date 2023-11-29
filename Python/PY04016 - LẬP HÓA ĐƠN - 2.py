import datetime

price = [25, 34, 50, 80]

class Customer:
    num = 0

    def __init__(self, name, roomNum, checkInDate, checkOutDate, extraCharge):
        Customer.num += 1
        self.id = "KH"
        if Customer.num < 10: self.id += "0"
        self.id += str(Customer.num)
        self.name = name
        self.roomNum = roomNum
        tmp = str(datetime.datetime(int(checkOutDate[6:]), int(checkOutDate[3:5]), int(checkOutDate[:2])) - datetime.datetime(int(checkInDate[6:]), int(checkInDate[3:5]), int(checkInDate[:2]))).split()[0]
        if tmp == '0:00:00':
            self.numOfStayingDays = 1
        else: self.numOfStayingDays = int(tmp) + 1
        self.checkOutPrice = self.numOfStayingDays * price[int(roomNum[0]) - 1] + extraCharge
    
    def __str__(self):
        return f"{self.id} {self.name} {self.roomNum} {self.numOfStayingDays} {self.checkOutPrice}"

a = []
for _ in range(int(input())):
    name = input().strip()
    roomNum = input().strip()
    checkInDate = input().strip()
    checkOutDate = input().strip()
    extraCharge = int(input())
    a.append(Customer(name, roomNum, checkInDate, checkOutDate, extraCharge))
    
a.sort(key = lambda x : -x.checkOutPrice)
for i in a:
    print(i)