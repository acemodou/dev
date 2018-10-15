def count(sequence, item):
    counter = 0
    for i in sequence:
        if i == item:
            counter +=1
    return counter



seq = 1,2,1,1
item = 1

print(count(seq,item))
