for i in range(int(input())):
    n = int(input())
    s = input()
    tempstr = "" 
    longest = 0
    cond = True
    cond2 = True

    freq = {}
    for i in range(len(s)):
        if(s[i] in freq):
            freq[s[i]] += 1

        else:
            freq[s[i]] = 1

    for f in freq.keys():
        if f%2 != 0:
            if not cond : cond2 = False
        cond = False
        
    if(cond2):
        print(len(s))
        continue   

    for i in range(len(s)):
        tempstr += s[i]
        longest = max(longest, len(tempstr[:-1]))
        if(tempstr not in s[i:]):
            tempstr = ""
    


    print(longest)
    