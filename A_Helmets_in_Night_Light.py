def minimum_cost_to_notify(t, test_cases):
    results = []
    for case in test_cases:
        n, p = case['n'], case['p']
        a = case['a']
        b = case['b']
        
        # Pairing residents' ai and bi, then sort by bi
        residents = sorted(zip(a, b), key=lambda x: x[1])
        
        total_cost = 0
        notified = 0
        
        for ai, bi in residents:
            if notified == n:
                break
            if notified == 0:
                # Notify first resident directly
                total_cost += p
                notified += 1
            
            # Calculate how many more can be notified by this resident
            to_notify = min(ai, n - notified)
            total_cost += to_notify * bi
            notified += to_notify
        
        results.append(total_cost)
    
    return results

# Input Parsing
import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1
test_cases = []

for _ in range(t):
    n = int(data[index])
    p = int(data[index + 1])
    index += 2
    
    a = list(map(int, data[index:index + n]))
    index += n
    
    b = list(map(int, data[index:index + n]))
    index += n
    
    test_cases.append({'n': n, 'p': p, 'a': a, 'b': b})

results = minimum_cost_to_notify(t, test_cases)

# Output Results
for result in results:
    print(result)
