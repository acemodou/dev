

def reverse(text):
    word = ""
    l = len(text)-1
    while l >= 0:
        word +=text[l]
        l -=1
    return word



text = "modoujaw"

print(reverse(text))
