def min_coins(target, coins):
    dp = [float('inf')] * (target + 1)
    dp[0] = 0
    coin_used = [[] for _ in range(target + 1)]
    
    for i in range(1, target + 1):
        for coin in coins:
            if i - coin >= 0 and dp[i - coin] + 1 < dp[i]:
                dp[i] = dp[i - coin] + 1
                coin_used[i] = coin_used[i - coin] + [coin]
    
    return dp[target] <= 8, coin_used[target]

target_amount = 98
coin_denominations = [15, 10, 6, 3, 1]

possible, coins_used = min_coins(target_amount, coin_denominations)

if possible:
    print("It is possible to make", target_amount, "using at most 8 coins.")
    print("The coins used are:", coins_used)
else:
    print("It is not possible to make", target_amount, "using at most 8 coins.")
