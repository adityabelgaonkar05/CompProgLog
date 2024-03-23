def prime(n):
    for i in range(2, n//2+1):
        if n%i == 0:
            return False
        
    return True

arr1 = []
arr2 = []

i = 0
count = 0

while count<23:
    if prime(i):
        if (i - 3)%7 == 0 or (i - 7)%3 == 0:
            count+=1
            arr1.append(i)
        
        i+=1

    else:
        i+=1


arr1 = arr1[3:]
print(arr1)

i = 0
count = 0

while count<23:
    if prime(i):
        if (i - 3)%4 == 0 or (i - 4)%3 == 0:
            count+=1
            arr2.append(i)
        
        i+=1

    else:
        i+=1

arr2 = arr2[3:]
print(arr2)

set1 = set(arr1)
set2 = set(arr2)
l = list(set1.intersection(set2))
l.sort()
print(l)

s = ""

for i in l:
    s = s + str(i)

print(s)

print(int(s)%(10**9 + 7))

#301926837