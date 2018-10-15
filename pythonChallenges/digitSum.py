

def digit_sum(n):
    total = 0
    while(n > 0): 
        total += n % 10
        n //=10
    return total


nums = 1234

print (digit_sum(nums))
