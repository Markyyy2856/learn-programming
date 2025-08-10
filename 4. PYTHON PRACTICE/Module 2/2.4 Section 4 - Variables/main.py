#Variables

#Example:
var = 1
account_balance = 1000.0
client_name = 'John Doe'

print(var, account_balance, client_name)
print(var)

#Using + operator
var = "3.8.5"
print("Python version: " + var)

#Variable of same name
var = 100
var = 200 + 300
print(var)

#Solving simple mathematical problems
a = 3.0
b = 4.0
c = (a ** 2 + b ** 2) ** 0.5
print("c =", c)

#2.4.7 LAB Variables
john = 3
mary = 5
adam = 6
print(john, mary, adam, sep=", ")

total_apples = (john + mary + adam)
print("Total apples:" , total_apples)

#Shortcut Operators
#Expression                 Shortcut Operator
#i = i + 2 * j              i += 2 * j
#var = var / 2              var /= 2
#rem = rem % 10             rem %= 10
#j = j - (i + var + rem)    j -= (i + var + rem)  
#x = x ** 2                 x **= 2


#2.4.9 LAB Variables ‒ a simple converter

kilometers = 12.25
miles = 7.38

miles_to_kilometers = (miles * 1.61)
kilometers_to_miles = (kilometers / 1.61)

print(miles, "miles is", round(miles_to_kilometers, 2), "kilometers")
print(kilometers, "kilometers is", round(kilometers_to_miles, 2), "miles")

#2.4.10 LAB Operators and expression
x = 0
x = float(x)

y = ((3 * x ** 3) - (2 * x ** 2) + (3 * x) + 1 )
print("y =", y)