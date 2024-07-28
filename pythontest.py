def closest_sum(a, f_a, b, f_b, T):
    closest_value = 0

    # Iterate over all possible combinations of multiples of a and b
    for i in range(f_a + 1):
        for j in range(f_b + 1):
            sum_value = i * a + j * b
            if sum_value <= T and sum_value > closest_value:
                closest_value = sum_value
    
    return closest_value

# Example usage:
a = 3
f_a = 4
b = 5
f_b = 3
T = 21

result = closest_sum(a, f_a, b, f_b, T)
print(f"The closest value to {T} is: {result}")
