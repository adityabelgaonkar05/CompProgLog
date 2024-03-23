for _ in range(int(input())):
    l = list(map(int, input().split()))
    l.sort()
    l.reverse()
    curr = l[0]
    print(l)

    for i in range(1, len(l)):
        if curr < curr + sum(l[0:i]) + l[i] * i:
            curr = curr + sum(l[0:i]) + l[i] * i

        else: break

    print(curr)