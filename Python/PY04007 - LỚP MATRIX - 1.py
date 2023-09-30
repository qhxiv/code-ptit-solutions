class Matrix:
    def __init__(self, n, m, dat):
        self.row = n
        self.column = m
        self.dat = dat
    
    def __str__(self):
        res = ""
        for i in range(self.row):
            for j in range(self.column):
                res += str(self.dat[i][j]) + " "
            if (i < self.row - 1): res += "\n"
        return res
    
    def tranpose(self):
        dat = []
        for j in range(self.column):
            row = []
            for i in range(self.row):
                row.append(self.dat[i][j])
            dat.append(row)
        return Matrix(self.column, self.row, dat)
    
    def mul(self, a):
        dat = []
        for i in range(self.row):
            row = []
            for j in range(a.column):
                tmp = 0
                for k in range(a.row):
                    tmp += self.dat[i][k] * a.dat[k][j]
                row.append(tmp)
            dat.append(row)
        return Matrix(self.row, a.column, dat)
            

for _ in range(int(input())):
    n, m = list(map(int, input().split()))
    dat = []
    for i in range(n):
        dat.append(list(map(int, input().split())))
    matrix = Matrix(n, m, dat)
    print(matrix.mul(matrix.tranpose()))