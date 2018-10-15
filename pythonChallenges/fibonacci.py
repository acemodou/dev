
fib_cache = {}
def fibonacci(n):
    
    if n in fib_cache:
        return fib_cache[n]
    
    if n == 1:
        result = 1
    elif n == 2:
        result =  1
    elif n > 2:
        result =  fibonacci(n-1) + fibonacci(n -2)
    fib_cache[n] = result
    return result


for i in range(1,100):
    print(i, ":", fibonacci(i))