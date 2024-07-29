import sys
input = sys.stdin.read

# submitting to compare slowness not cheating!

def main():
    data = input().split()
    index = 0
    
    t = int(data[index])
    index += 1
    
    results = []
    
    for _ in range(t):
        n = int(data[index])
        k = int(data[index + 1])
        index += 2
        
        a = list(map(int, data[index:index + n]))
        index += n
        b = list(map(int, data[index:index + n]))
        index += n
        
        c = []
        maxel = b[0]
        
        for i in range(1, n):
            a[i] += a[i - 1]
        
        for i in range(n):
            maxel = max(maxel, b[i])
            c.append(maxel)
        
        right = min(k - 1, n - 1)
        ans = -float('inf')
        
        while right >= 0:
            temp = a[right]
            if k > right - 1:
                temp += ((k - right - 1) * c[right])
            
            ans = max(ans, temp)
            right -= 1
        
        results.append(str(ans))
    
    print('\n'.join(results))

if __name__ == "__main__":
    main()
