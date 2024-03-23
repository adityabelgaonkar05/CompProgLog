
def maxOperations(nums):
    sumtocheck = nums[0] + nums[1]
    sum2check = nums[0] + nums[-1]
    sum3check = nums[-1] + nums[-2]
    
    secondnums = nums[1:-1]
    thirdnums = nums[0:-2]
    nums = nums[2:]
    
    opfront2 = 1
    opback2 = 1
    opfrntbck = 1
    
    while(len(nums) > 1):
        if nums[0] + nums[1] == sumtocheck:
            opfront2 += 1
            nums = nums[2:]
        
        elif nums[0] + nums[-1] == sumtocheck:
            opfront2 += 1
            nums = nums[1:-1]
            
        elif nums[-1] + nums[-2] == sumtocheck:
            opfront2+=1
            nums = nums[0:-2]
            
        else:
            break
            
    while(len(secondnums) > 1):
        if secondnums[0] + secondnums[1] == sum2check:
            opback2 += 1
            secondnums = secondnums[2:]
        
        elif secondnums[0] + secondnums[-1] == sum2check:
            opback2 += 1
            secondnums = secondnums[1:-1]
            
        elif secondnums[-1] + secondnums[-2] == sum2check:
            opback2+=1
            secondnums = secondnums[0:-2]
            
        else:
            break
            
    while(len(thirdnums) > 1):
        if thirdnums[0] + thirdnums[1] == sum3check:
            opfrntbck += 1
            thirdnums = thirdnums[2:]
        
        elif thirdnums[0] + thirdnums[-1] == sum3check:
            opfrntbck += 1
            thirdnums = thirdnums[1:-1]
            
        elif thirdnums[-1] + thirdnums[-2] == sum3check:
            opfrntbck+=1
            thirdnums = thirdnums[0:-2]
            
        else:
            break
            
    
    return max([opfront2, opback2, opfrntbck])

print(maxOperations([1,1,2,3,2,2,1,3,3]))