#Loops in Python

#Infinite Loop
#while True:
#    print("I'm stuck inside a loop.")

###############
#Example 1
# Store the current largest number here.
largest_number = -999999999

# Input the first value.
number = int(input("Enter a number or type -1 to stop: "))

# If the number is not equal to -1, continue.
while number != -1:
    # Is number larger than largest_number?
    if number > largest_number:
        # Yes, update largest_number.
        largest_number = number
    # Input the next number.
    number = int(input("Enter a number or type -1 to stop: "))

# Print the largest number.
print("The largest number is:", largest_number)

###############
#Example 2
# A program that reads a sequence of numbers
# and counts how many numbers are even and how many are odd.
# The program terminates when zero is entered.

odd_numbers = 0
even_numbers = 0

# Read the first number.
number = int(input("Enter a number or type 0 to stop: "))

# 0 terminates execution.
while number != 0:
    # Check if the number is odd.
    if number % 2 == 1:
        # Increase the odd_numbers counter.
        odd_numbers += 1
    else:
        # Increase the even_numbers counter.
        even_numbers += 1
    # Read the next number.
    number = int(input("Enter a number or type 0 to stop: "))

# Print results.
print("Odd numbers count:", odd_numbers)
print("Even numbers count:", even_numbers)

###############
#Using a counter vaariable to exit a loop

counter = 5
while counter:
    print("Inside the loop.", counter)
    counter -= 1
print("Outside the loop.", counter)

###############
#3.2.4 LAB Guess the secret number

secret_number = 777

print(
"""
+================================+
| Welcome to my game, muggle!    |
| Enter an integer number        |
| and guess what number I've     |
| picked for you.                |
| So, what is the secret number? |
+================================+
""")

num = int(input("Guess the secret number: "))

while num != secret_number:
    print("Ha ha! You're stuck in my loop!")
else:
    print("Well done, muggle! You are free now.")

###############
#Looping

#while loop
i = 0
while i < 10:
    print("The current value of i is" , i)
    i += 1

#for loop
for i in range(10): #range(0-9)
    print("The value of i is currently", i)

#Note: range can have more than one argument e.g. 
#range(2, 9, 3))
#2 starting number, 8 is the last (range 9), 3 increment
#Output: 2, 5, 8 

#Another xample
power = 1
for expo in range(16):
    print("2 to the power of", expo, "is", power)
    power *= 2

#3.2.7 LAB Essentials of the for loop – counting mississippily

import time

for i in range(1, 6):
    print(i , ("Mississippi"))
    time.sleep(1)

print("Ready or not, here I come!")

###############
#Break & continue statements

# break - stops the loop immediately

print("The break instruction:")
for i in range(1, 6):
    if i == 3:
        break
    print("Inside the loop.", i)
print("Outside the loop.")


# continue - skips the current iteration and continues with the next one

print("\nThe continue instruction:")
for i in range(1, 6):
    if i == 3:
        continue
    print("Inside the loop.", i)
print("Outside the loop.")

#3.2.9 LAB The break statement – Stuck in a loop

while True:
    word = input("Enter a word: ")
    if word == "chupacabra":
        print("You've successfully left the loop.")
        break

#3.2.10 LAB The continue statement – the Ugly Vowel Eater

user_word = input("Enter a word: ")
user_word = user_word.upper()

for letter in user_word:
    if letter in "AEIOU":
        continue
    print(letter)

#Example:
shopping_list = ["milk", "eggs", "apples", "bread", "soda", "cheese"]

for item in shopping_list:
    print(f"I'm at the store, looking for {item}...")

    # Fill in the blanks with "continue" or "break"
    if item == "soda":
        print("I'm on a diet, skipping this item.")
        break
    if item == "bread":
        print("Okay, got all the essentials. Time to go home!")
        continue

    print(f"Putting {item} in my cart.")

print("\nDone with my shopping trip.")


#While loop and else branch
i = 1
while i < 5:
    print(i)
    i += 1
else:
    print("else:", i)

#For loop and else branch
for i in range(5):
    print(i)
else:
    print("else:", i)

#3.2.14 LAB Essentials of the while loop
blocks = int(input("Enter the number of blocks: "))

height = 0
layer = 1

while blocks >= layer:
    blocks -= layer
    height += 1
    layer += 1

print("The height of the pyramid:", height)

c0 = int(input("Enter a number: "))

while c0 % 2 == 0:
    c0 / 2
    
#Quiz

#Question 1: Create a for loop that counts from 0 to 10, and prints odd numbers to the screen.
for i in range(1, 11):
    if i % 2 == 1:
        print(i)

#Question 2: Create a while loop that counts from 0 to 10, and prints odd numbers to the screen.
x = 1
while x < 11:
    if x % 2 == 1:
        print(x)
    x += 1

#Question 3: Create a program with a for loop and a break statement. The program should iterate over characters in an email address, exit the loop when it reaches the @ symbol, and print the part before @ on one line. 
for ch in "john.smith@pythoninstitute.org":
    if ch == "@":
        break
    print(ch)

#Create a program with a for loop and a continue statement. The program should iterate over a string of digits, replace each 0 with x, and print the modified string to the screen.
for digit in "0165031806510":
    if digit == "0":
        print("x")
        continue
    print (digit)