import math


def median(numbers):
    if numbers == []:
        return []

    numbers = sorted(numbers)

    check = len(numbers)
 
    if check % 2 != 0:
        return numbers[math.floor(check /2)]
    else:
        return (numbers[math.floor(check /2)] + numbers[math.ceil(check /2)]) /2














nums = [7,3,1,4]

print(median(nums))
