while True:
    n = int(input())
    if n == 0:
        break

    min_val = int(input())
    max_val = min_val
    n -= 1
    while n > 0:
        n -= 1
        x = int(input())
        min_val = min(min_val, x)
        max_val = max(max_val, x)
    if min_val == max_val:
        print("BANG NHAU")
    else:
        print(min_val, max_val)