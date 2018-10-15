

def checktype(x):
    result = x - int(x)
    if result > 0:
        return "is double"
    else:
        return "is int"




num = 3.0

print(checktype(num))
