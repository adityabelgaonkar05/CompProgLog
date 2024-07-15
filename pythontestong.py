def compute_fg(permutation, m, k):
    n = len(permutation)
    f = [0] * n
    g = [0] * n
    f_sum = 0
    g_sum = 0

    for i in range(n):
        if permutation[i] >= k:
            f_sum += permutation[i]
        f[i] = f_sum

        if permutation[i] <= m:
            g_sum += permutation[i]
        g[i] = g_sum
    
    return f, g

# Example usage:
permutation = [10, 9, 8, 4, 5, 6, 7, 1, 2, 3]
m = 3
k = 8

f_values, g_values = compute_fg(permutation, m, k)
print("f values:", f_values)
print("g values:", g_values)
print(sum(f_values) - sum(g_values))
