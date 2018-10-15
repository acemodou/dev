def purify(num):
    new_num = []

    for i in num:
        if i % 2 == 0:
            new_num.append(i)
    return new_num


num = 1,2,3,4

print(purify(num))
