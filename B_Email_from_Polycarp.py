for i in range(int(input())):
    s1 = input()
    s2 = input()

    if len(s1) > len(s2) or len(s1) == len(s2) and s1 != s2:
        print("NO")

    else:
        for