for _ in range(int(input())):
    n = int(input())
    s = list(input())
    U = s.count('U')
    D = n-U
    if U==1:
        print("Yes")
        continue
    
    if D==0:
        if n%2==0:
            print("No")
        else:
            print("Yes")
        continue
    
    if U==0:
        print("No")
        continue
    
    if D==1:
        if n%2==0:
            print("Yes")
        else:
            print("No")
        continue
    
    if U%2==0:
        print("No")
    else:
        print("Yes")