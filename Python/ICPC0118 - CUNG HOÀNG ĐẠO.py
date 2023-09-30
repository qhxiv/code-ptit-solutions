def solve(d, m):
    if m == 1:
        if d < 20: return "Ma Ket"
        else: return "Bao Binh"
    elif m == 2:
        if d < 19: return "Bao Binh"
        else: return "Song Ngu"
    elif m == 3:
        if d < 21: return "Song Ngu"
        else: return "Bach Duong"
    elif m == 4:
        if d < 20: return "Bach Duong"
        else: return "Kim Nguu"
    elif m == 5:
        if d < 21: return "Kim Nguu"
        else: return "Song Tu"
    elif m == 6:
        if d < 21: return "Song Tu"
        else: return "Cu Giai"
    elif m == 7:
        if d < 23: return "Cu Giai"
        else: return "Su Tu"
    elif m == 8:
        if d < 23: return "Su Tu"
        else: return "Xu Nu"
    elif m == 9:
        if d < 23: return "Xu Nu"
        else: return "Thien Binh"
    elif m == 10:
        if d < 23: return "Thien Binh"
        else: return "Thien Yet"
    elif m == 11:
        if d < 23: return "Thien Yet"
        else: return "Nhan Ma"
    elif m == 12:
        if d < 22: return "Nhan Ma"
        return "Ma Ket"

t = int(input())
while t > 0:
    t -= 1
    a = list(map(int, input().split()))
    print(solve(a[0], a[1]))