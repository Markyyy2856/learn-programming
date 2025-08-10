#Python Literals

print("2") #String enclosed in " "
print(2)   #Integer doesn't need " "

#String - Series of letters.
#Integer (int) - whole number
#Floating-point (float) - fractions

#Int
print(12345) 

#Octal-Decimal Convertion (83)
print(0o123)

#Hexadecimal-Decimal Convertion (291)
print(0x123)

#Float
print(2.3)

print(0.0000000000000000000001)
#Outputs 1e-22
#Python always chooses the more economical form

#String
#Print I like "Monty Python" without error

#Use \ + symbol e.g.(\")
print("I like \"Monty Python\"")

#Use apostrophe (') instead of quote
print('I like "Monty Python"')

#Print I'm Monty Python. (2 possible answers)
print("I\'m Monty Python.")
print('I\'m Monty Python.')

#Additional
print("I" , "m" , sep="'" , end=" ")
print("Monty Python.")

#Boolean 
print(True > False)
print(True < False)

#2.2.6 LAB Python literals - strings
#Write a one-line piece of code, using the print() 
#function, as well as the newline and escape characters, 
#to match the expected result outputted on three lines.

#Expected Output
#"I'm"
#""learning""
#"""Python"""

print('"I\'m"' , "\n\"\"learning\"\"" , "\n\"\"\"Python\"\"\"")

print("\"I'm\"\n\"\"learning\"\"\n\"\"\"Python\"\"\"")