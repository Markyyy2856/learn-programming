#How functions communicate with their environment

#def function(parameter):
#parameters live inside functions (this is their natural environment)
#arguments exist outside functions, and are carriers of values passed to corresponding parameters.

#Parameterized functions
def message(number):
    print("Enter a number:", number)

message(1)

#The value of the argument used during invocation (1) has
#been passed into the function, setting the initial value 
#of the parameter named number

def message(number):
    print("Enter a number:", number)

number = 1234
message(1)      #Prints function above
                #Outputs: Enter a number: 1
print(number)   #Outputs number variable which is 1234

#A situation like this activates a mechanism called shadowing

#Function with 2 parameters:
def message(what, number):
    print("Enter", what, "number", number)

message("telephone", 11)
message("price", 5)
message("number", "number")

###############################
#Positional parameter passing
def my_function(a, b, c):
    print(a, b, c)

my_function(1, 2, 3)
#Values are assined depending on their position e.g. 1:a, 2:b, 3:c
my_function(2, 3, 1)
#Output became 2, 3, 1

###############################
#Keyword argument passing
def introduction(first_name, last_name):
    print("Hello, my name is", first_name, last_name)

introduction(first_name = "James", last_name = "Bond")
introduction(last_name = "Skywalker", first_name = "Luke")

#Same as before but this time, parameters has a 
#specific value regardless of their position

###############################
#Mixing positional and keyword arguments
def adding(a, b, c):
    print(a, "+", b, "+", c, "=", a + b + c)
    #Outputs: a + b + c = sum of the three

#positional argument passing
adding(1, 2, 3) #Assigns the value of a, b, c

#keyword argument passing
adding(a = 2, b = 5, c =1)

#combination of positional and keyword passing
adding(4, b = 7, c = 3)
#Can only be used at the start (positional arguments must come before any keyword arguments.)

###############################
#Parametrized functions – more details
def introduction(first_name, last_name="Smith"):
     print("Hello, my name is", first_name, last_name)

introduction("James", "Doe")
#Outputs Hello, my name is James Doe overriding 
#"Smith" as last_name initial value

introduction("Henry")
#Outputs Hello, my name is Henry Smith
#since only first_name has value here, it
#follows last_name value inside function