def solve(s):
    i = len(s) - 1
    while i > 0:
        if s[i] != "8" and s[i] != "6":
            return "NO"
        if s[i] == "8":
            cnt = 0
            f = False
            while i > 0 and s[i] != "6":
                i -= 1
                cnt += 1
                if s[i] == "6":
                    f = True
            if cnt > 2 or not f:
                return "NO"
        i -= 1
    return "YES"
        
print(solve(input()))