def antivowel(text):
    noVow = ""
    if text == "%20":
        return "empty String is not allowed"
    else:
        for i in text:
            for j in "AEIOUaeiou":
                if i == j:
                    i = ""
                else:
                    i=i
            noVow +=i
        return noVow
        



text = "Hey you"

print (antivowel(text))
                
    
