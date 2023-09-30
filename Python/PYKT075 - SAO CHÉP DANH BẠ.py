class Name:
    def __init__(self, name):
        arr = name.split()
        n = len(arr)
        self.firstName = arr[n - 1]
        self.lastName = ""
        for i in range(n - 1):
            self.lastName += arr[i] + " "
        self.lastName = self.lastName.strip()
    
    def __str__(self):
        return self.lastName + " " + self.firstName

class Contact:
    def __init__(self, name, number, date):
        self.name = name
        self.number = number
        self.dateAdded = date.split()[-1]
    
    def __str__(self):
        return str(self.name) + ": " + self.number + " " + self.dateAdded

inp = open("SOTAY.txt", "r")
a = inp.readlines()
tmp = lambda x : x[:len(x) - 1] if x[len(x) - 1] == '\n' else x
a = list(map(tmp, a))

i = 0
n = len(a)
contacts = []
while (i < n):
    j = i + 1
    tmp = []
    while (j < n and (not "/" in a[j])):
        contacts.append(Contact(Name(a[j]), a[j + 1], a[i]))
        j += 2
    i = j

contacts.sort(key = lambda contact : (contact.name.firstName, contact.name.lastName))
for i in contacts:
    print(i)