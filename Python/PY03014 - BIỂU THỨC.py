for _ in range(int(input())):
    st = []
    st2 = []
    c = 1
    for i in input():
        if i != "(" and i != ")":
            continue
        if i == "(":
            st.append(c)
            print(c, end = " ")
            c += 1
        else:
            print(st[len(st) - 1], end = " ")
            st.pop()
    print()