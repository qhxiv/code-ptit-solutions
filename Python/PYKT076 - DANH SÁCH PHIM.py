import datetime

genres = []

class Film:
    num = 0

    def __init__(self, genreId, openingDay, name, numOfEps):
        Film.num += 1
        self.id = "P"
        if Film.num < 10: self.id += "00"
        elif Film.num < 100: self.id += "0"
        self.id += str(Film.num)
        
        t = 2
        while genreId[t] == "0":
            t += 1
        self.genre = genres[int(genreId[t:]) - 1]
        self.openingDay = openingDay
        self.dateTime = datetime.datetime(int(openingDay[-4:]), int(openingDay[3:5]), int(openingDay[:2]))
        self.name = name
        self.numOfEps = numOfEps
    
    def __str__(self):
        return f"{self.id} {self.genre} {self.openingDay} {self.name} {self.numOfEps}"
n, m = map(int, input().split())
for _ in range(n):
    genres.append(input())

a = []
for _ in range(m):
    a.append(Film(input(), input(), input(), input()))
a.sort(key = lambda x : x.dateTime)
for i in a:
    print(i)