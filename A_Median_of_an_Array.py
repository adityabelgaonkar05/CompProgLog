for i in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))

    l.sort()

    tofind = l[int(n/2)]
    print(l[:int(n/2+1)].count(2))