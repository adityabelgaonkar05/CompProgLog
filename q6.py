num = 0
count = 0

for i in range(84070):
    num = i

    while num!=89 or num!=1:
        sumnum = str(num)
        newnum = 0
        
        for i in range(len(sumnum)):
            newnum+=int(sumnum[i])**2

        num = newnum

        if num == 89:
            count += 1

print(count)