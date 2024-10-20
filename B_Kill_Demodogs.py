for _ in range(int(input())):
    n = int(input())
    ans = (n * (n - 1) * (n + 1)) / 3 + (n * (n + 1) * (2 * n + 1)) / 6
    print(int((2022 * ans) % 1000000007))