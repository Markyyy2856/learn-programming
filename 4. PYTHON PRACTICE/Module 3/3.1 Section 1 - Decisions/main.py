#Questions & Answers

#Comparison: equality operator
# "=" - 'equals' asignment operator e.g. (a = 2)
# "==" 'equal to' compares e.g. (a == b) (True or False)

var = 0  # Assigning 0 to var
print(var == 1) #Compares if var is equal to 1

###############
# "!=" - 'not equal to' compares e.g. (a != b) 

var = 0  # Assigning 0 to var
print(var != 0)
var = 1  # Assigning 1 to var
print(var != 0)

###############
# ">" - 'greater than' compares e.g. (a > b)
a = 5
b = 3
print(a > b)

###############
# "<" - 'less than' compares e.g. (a < b)
a = 5
b = 3
print(a < b)

###############
#3.1.6 LAB Variables ‒ Questions and answers
n = int(input("Enter a number: "))
print(n >= 100)

###############
#Conditions and conditional execution
# "if" statement

#if true_or_false_condition:
#    perform_if_condition_true

n = int(input("Enter a number: "))

if n >= 100:
    print(n , "is greater than 100!")

###############
# "if-else" statement

#if true_or_false_condition:
#    perform_if_condition_true
#else:
#    perform_if_condition_false

n = int(input("Enter a number: "))

if n >= 100:
    print(n , "is greater than 100!")
else:
    print(n , "is less than 100.")

###############
#Nested if-else
score = int(input("Enter your score: "))

if score >= 75:
    print("You passed.")
    
    if score >= 90:
        print("Excellent!")
    else:
        if score >= 85:
            print("Very Good!")
        else:
            if score >= 80:
                print("Good.")
            else:
                print("Satisfactory.")
else:
    print("You failed.")

###############
# 'elif' statement
age = int(input("Enter your age: "))

if age < 13:
    print("Child")
elif age < 20:
    print("Teen")
elif age < 60:
    print("Adult")
else:
    print("Senior")

###############
#Combination
temp = int(input("Enter temperature: "))

if temp > 0:
    print("Above freezing")

if temp > 30:
    print("Hot")
elif temp > 20:
    print("Warm")
else:
    print("Cold")

###############
#Pseudocode and Intro to Loops

# Read three numbers.
number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))
number3 = int(input("Enter the third number: "))

# Check which one of the numbers is the greatest
# and pass it to the largest_number variable.
#Use max() to find largest number of all, min() lowest

largest_number = max(number1, number2, number3)

# Print the result.
print("The largest number is:", largest_number)

###############
#3.1.10 LAB Comparison operators and conditional execution
plant = input("Enter a plant name: ")
if plant == "Spathiphyllum":
    print("Yes - Spathiphyllum is the best plant ever!")
elif plant == "spathiphyllum":
    print("No, I want a big Spathiphyllum!")
else:
    print("Spathiphyllum! Not" , plant , "!")

###############
#3.1.11 LAB Essentials of the if-else statement

income = float(input("Enter the annual income: "))

if income < 85528:
	tax = income * 0.18 - 556.02
else:
	tax = (income - 85528) * 0.32 + 14839.02
	
if tax < 0.0:
    tax = 0.0
tax = round(tax, 0)

print("The tax is:", tax, "thalers")

###############
#3.1.1  LAB Essentials of the if-elif-else statement
year = int(input("Enter a year: "))

if year < 1582:
	print("Not within the Gregorian calendar period")
else:
    if year % 4 != 0:
          print("It's a Common Year")
    elif year % 100 != 0:
          print("It's a Leap Year")
    elif year % 400 != 0:
          print("It's a Common Year")
    else:
          print("It's a Leap Year")