
""" CrossWords Add """
""" [1,2,3]  + reverse [3,2,1] == [4,4,4] """

def crossAdd(input):
    list1 = input
    list2 = []
    for i in reversed(list1):
        list2.append(i)
    answer = [sum(i) for i in zip(list1,list2)]
    print(answer)
        


    

   
    
        
  
        
    

input = [1,2,3]
test = crossAdd(input)

        
    
