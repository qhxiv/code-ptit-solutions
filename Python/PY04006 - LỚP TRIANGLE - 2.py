import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def distance(a, b):
        x = abs(a.x - b.x)
        y = abs(a.y - b.y)
        return math.sqrt(x*x + y*y)
    
def check(a, b, c):
    d1 = Point.distance(a, b)
    d2 = Point.distance(a, c)
    d3 = Point.distance(c, b)
    return d1 + d2 > d3 and d1 + d3 > d2 and d2 + d3 > d1

class Triangle:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    
    def area(self):
        x = Point.distance(self.a, self.b)
        y = Point.distance(self.a, self.c)
        z = Point.distance(self.c, self.b)
        p = (x + y + z) / 2
        return math.sqrt(p * (p - x) * (p - y) * (p - z))

arr = []
t = int(input())
for _ in range(t):
    arr += list(map(float, input().split()))

i = 0
for i in range(0, t * 6, 6):
    a = Point(arr[i], arr[i + 1])
    b = Point(arr[i + 2], arr[i + 3])
    c = Point(arr[i + 4], arr[i + 5])
    if (check(a, b, c)):
        tri = Triangle(a, b, c)
        print("%.2f" % tri.area())
    else:
        print("INVALID")