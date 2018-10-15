def clinic():
    print "You have just entered the clinic!"
    print "Do you take the door on the left or the right?"
    answer = raw_input("Type left or right and hit 'Enter'.").lower()
    if answer == "left" or answer == "l":
        print "Welcome to death row !"
    elif answer == "right" or answer == "r":
        print "Welcome to the cure room"
    else:
        print "You didn't pick left or right! Try again"
        clinic()
clinic()

