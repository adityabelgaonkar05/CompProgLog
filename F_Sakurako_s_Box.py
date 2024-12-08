for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    for i in a:
        b.append(i)

    for i in range(1, len(b)):
        b[i] += b[i - 1]

    sum = 0

    for i in range(len(a)):
        sum += ((b[len(b) - 1] - b[i]) * a[i])
    
    print(sum)