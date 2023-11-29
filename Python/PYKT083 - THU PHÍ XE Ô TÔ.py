def calc(car, chair):
    if car == "Xe_con":
        if chair == "5": return 10000
        if chair == "7": return 15000
    if car == "Xe_tai" and chair == "2": return 20000
    if car == "Xe_khach":
        if chair == "29": return 50000
        if chair == "45": return 70000
    return False

d = {}
for _ in range(int(input())):
    t, car, chair, direction, date = input().split()
    if direction == "IN":
        t = calc(car, chair)
        if t != False:
            if d.get(date) == None: d[date] = 0
            d[date] += t

for i in d.keys():
    print(f"{i}: {d[i]}")