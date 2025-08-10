#Interaction with the user

#input() function
print("Tell me anything...")
anything = input()
print("Hmm...", anything, "... Really?")

#Note: Result of the input() function is a string.

##############################
#Type Casting (type conversions)
#string: int(string)
#string: float(string)
anything = float(input("Enter a number: "))
something = anything ** 2.0
print(anything, "to the power of 2 is", something)

#Example: Program to find the length of the hypothenuse
leg_a = float(input("Input first leg length: "))
leg_b = float(input("Input second leg length: "))
hypo = (leg_a**2 + leg_b**2) ** .5
print("Hypotenuse length is", hypo)

##############################
#String Operators
# Plus (+) Operator - Concatenates (join together)
#string + string

#Don't forget ‒ if you want the + sign to be a 
#concatenator, not an adder, you must ensure that both its 
#arguments are strings.

fnam = input("May I have your first name, please? ")
lnam = input("May I have your last name, please? ")
print("Thank you.")
print("\nYour name is " + fnam + " " + lnam + ".")

##############################
#Asterisk (*) Operator - Replication + concat
#string * number
#number * string

#Note: A number less than or equal to zero produces an
#empty string.

print("James" * 3)
print(3 * "an")
print(5 * "2")

##############################
#Convert a number into a string
#using str() function

leg_a = float(input("Input first leg length: "))
leg_b = float(input("Input second leg length: "))
print("Hypotenuse length is " + str((leg_a**2 + leg_b**2) ** .5))

#2.6.9 LAB Simple input and output
a = float(input("Enter first number: "))
b = float(input("Enter first number: "))

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)
print("\nThat's all, folks!")

#2.6.10 LAB Operators and expressions
x = float(input("Enter value for x: "))
y = 1./(x + 1./(x + 1./(x + 1./x)))
print("y =", y)

#2.6.11 LAB Operators and expressions – 2
hour = int(input("Starting time (hours): "))
mins = int(input("Starting time (minutes): "))
dura = int(input("Event duration (minutes): "))
mins = mins + dura # find a total of all minutes
hour = hour + mins // 60 # find a number of hours hidden in minutes and update the hour
mins = mins % 60 # correct minutes to fall in the (0..59) range
hour = hour % 24 # correct hours to fall in the (0..23) range
print(hour, ":", mins, sep='')

