
"""1 1 2 3  5 8 13
The sum of the previous two values
At the end of the nth month,
the number of pairs of rabbits is equal to the number of new pairs
(which is the number of pairs in month n - 2)
plus the number of pairs alive last month (n - 1).
This is the nth Fibonacci number.
This is the Fibonacci sequence in mathematical terms: """


def fib(n):
    if n <= 2:
        return 1
    else:
        return fib(n-2) + fib(n-1)

"""We can speed up the process by using memoization .
Store values for recent function calls so future 
function calls do not have to repeat the work !!!
1. store values in cache
2. Check if the value is in cache 
3. If the number is 1 or 2 return 1
4. If the value is greater than 2 """

cache_value = {}

def fibonacci(n):
    if n in cache_value:
        return cache_value[n]
    elif n <=2:
        value = 1
    elif n > 2:
        value = fibonacci(n-2) + fibonacci(n-1)
    cache_value[n] = value
    return value

for i in range(1,11):
    print(i, ":", fibonacci(i))