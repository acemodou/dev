"""5! = 5 * 4 * 3 * 2 * 1
Idea of this is combinational . Example the word
Modou combined 120 combination
1. multiply 5 by 4 factorial
2. Check if the value is in cache
2. Then go down the list until we hit the base"""


fact_cache = {}

def factorial(n):
    if n in fact_cache:
        return fact_cache[n]
    if n == 0:
        val = 1
    elif n > 0:
        val = n * factorial(n -1)
    fact_cache[n] = val
    return val


for i in range (1,6):
    print(factorial(i))