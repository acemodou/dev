#collect string /test length

# input = raw_input("Please enter a test string: ")

# if len(input) < 6:
# 	print("Your string is too short.")
# 	print("Please enter a string with at least 6 characters")


#check if a number is odd or even 

# input1 = raw_input("Enter a number: ")

# number = int(input1);

# if number % 2 == 0:
# 	print("This is an even number. ")
# else:
# 	print("This is an odd number ")



#Scalene triangle : All sides have different lengths.
#Isosceles triangle : Two sides have the same length.
#Equilateral triangle : All sides are equal
# To know that a triangle is valid ? The sum of pairs must be greater than (not equal to ) the 3 side.

a = int(raw_input("The length of side a = "))
b = int(raw_input("The length of side b = "))
c = int(raw_input("The length of side c = "))

if a!= b and b!=c and a!=c:
	print("This is a scalene triangle. ")
elif a ==b and b ==c:
	print("This is an equilateral triangle")
else:
	print("This is an isoceles triangle ")
