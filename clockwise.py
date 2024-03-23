import math

n = int(input("Enter n: "))
c = n**2

pattern = [[[0]*n]*n]

up = 0
down = n-1
left = 0
right = n-1

print(pattern)

while(up <= down and left <= right):
    for j in range(n):
        for k in range(n):
            if(j == up):
                pattern[j][k] = c
                c-=1

    up-=1
    for j in range(n):
        for k in range(n):
            if(j == right):
                pattern[j][k] = c
                c-=1

    right-=1
    for j in range(n):
        for k in range(n):
            if(j == down):
                pattern[j][k] = c
                c-=1

    down+=1
    for j in range(n):
        for k in range(n):
            if(j == left):
                pattern[j][k] = c
                c-=1

    left+=1


print(pattern)


        