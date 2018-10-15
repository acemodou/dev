
##def remove_dup(nums):
##    if nums == []:
##        return []
##    my_set = set()
##    for i in nums:
##        my_set.add(i)
##    return my_set


def remove_dup(nums):
    if nums == []:
        return []

    #Sort the input list from low to high
    nums = sorted(nums)
    outputnums = [nums[0]]
    return ouptutnums
    
     



    
test = [1,3,5,6,7,7,1,2]
print(remove_dup(test))
