arr = [1, 2]

while arr[-1] < 4000000:
    arr.append((arr[-1] + arr[-2]))

newarr = list(filter(lambda a: a%2 == 0, arr))

print(sum(newarr))

#4613732