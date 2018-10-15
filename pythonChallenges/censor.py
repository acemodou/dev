

def censor(sentence,word):
    text = sentence.split()
    asterisk = len(word) * '*'

    new_sent = ''
    count = 0

    for i in text:
        if word in i:
           text[count] = asterisk
        count +=1
    new_sent =' '.join(text)
    return new_sent
            


test = "This hack is wack hack"
word = "hack"

print(censor(test,word))
