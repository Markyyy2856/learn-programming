#Functions

#This is what the simplest function definition looks like:

def function_name():
    function_body

#Example:
def message():
    print("Enter a value: ")

print("We start here.")
message()
print("We end here.")

#Outputs:
#We start here.
#Enter a value:
#We end here.

#You mustn't have a function and a 
# variable of the same name.
def message():
    print("Enter a value: ")

message = 1
#Assigning a value to the name message 
#causes Python to forget its previous 
#role. The function named message becomes unavailable.

#Another example:
def hello(name): # defining a function
    print("Hello,", name) # body of the function
 
name = input("Enter your name: ")
hello(name) # calling the function
