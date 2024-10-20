for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    for i in range(m):
        x, y = map(int, input().split())
        arr[0] -= y

    for i in range(1, n):
        arr[i] += arr[i - 1]

    for i in arr:
        print(i, end=' ')

    print()