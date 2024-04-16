for _ in range(int(input())):
    n, m = map(int, input().split())
    x = input()
    s = input()

    check = x * 25
    if s in check:
        news = x
        op = 0
        while(s not in news):
            news+=news
            op+=1

        print(op)

    else: print(-1)