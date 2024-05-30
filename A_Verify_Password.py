for _ in range(int(input())):
    n = int(input())
    password = input()
    
    digits = []
    letters = []
    
    for char in password:
        if char.isdigit():
            digits.append(char)
        else:
            letters.append(char)
    
    if digits != sorted(digits):
        print("NO")
        continue
    
    if letters != sorted(letters):
        print("NO")
        continue
    
    combined = ''.join(digits) + ''.join(letters)
    if combined != password:
        print("NO")
        continue
    
    print("YES")
