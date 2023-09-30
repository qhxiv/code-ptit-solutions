class ComplexNumber:
    def __init__(self, a, b):
        self.real = a
        self.img = b
    
    def __str__(self):
        return "%d + %di" % (self.real, self.img)
    
    def add(self, a):
        return ComplexNumber(self.real + a.real, self.img + a.img)
    
    def mul(self, a):
        x = self.real*a.real - self.img*a.img
        y = self.real*a.img + self.img*a.real
        return ComplexNumber(x, y)

for _ in range(int(input())):
    a, b, c, d = list(map(int, input().split()))
    A = ComplexNumber(a, b)
    B = ComplexNumber(c, d)
    s = A.add(B)
    print(f"{s.mul(A)}, {s.mul(s)}")