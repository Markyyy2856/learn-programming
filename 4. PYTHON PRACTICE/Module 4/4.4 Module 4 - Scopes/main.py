#Scopes in Python

def my_function():
    print("Do I know that variable?", var)

var = 1         #Assigns var to 1
my_function()   #Prints function
print(var)      #prints 1

#A variable existing outside a function has 
#scope inside the function's body

#Another Example:
def my_function():
    var = 2     #Assigns var to 2
    print("Do I know that variable?", var)


var = 1         #Assigns var again to 1
my_function()   #Prints function, var = 2
print(var)      ##prints 1

#The var variable created inside the function is not the 
#same as when defined outside it ‒ it seems that there 
#two different variables of the same name;

#Moreover, the function's variable shadows the variable 
#coming from the outside world.

##############################
#Functions and scopes: the global keyword

#Extends a variable's scope in a way which includes the 
#function's body (even if you want not only to read the 
#values, but also to modify them).

def my_function():
    global var      #global function
    var = 2         #Modifies global var to 2
    print("Do I know that variable?", var)


var = 1             #ignored
my_function()       #prints function
print(var)          #prints global var

##############################
#How the function interacts with its arguments
def my_function(n):
    print("I got", n)
    n += 1
    print("I have", n)


var = 1
my_function(var)
print(var)

#Changing the parameter's value doesn't propagate outside the function
#function receives the argument's value, not the argument itself. This is true for scalars.

#Another Example:
def my_function(my_list_1):
    print("Print #1:", my_list_1)
    print("Print #2:", my_list_2)
    my_list_1 = [0, 1]
    print("Print #3:", my_list_1)
    print("Print #4:", my_list_2)


my_list_2 = [2, 3]
my_function(my_list_2)
print("Print #5:", my_list_2)

#Output:
#Print #1: [2, 3]
#Print #2: [2, 3]
#Print #3: [0, 1]
#Print #4: [2, 3]
#Print #5: [2, 3]

#Example 2:
def my_function(my_list_1):
    print("Print #1:", my_list_1)
    print("Print #2:", my_list_2)
    del my_list_1[0]  # Pay attention to this line.
    print("Print #3:", my_list_1)
    print("Print #4:", my_list_2)


my_list_2 = [2, 3]
my_function(my_list_2)
print("Print #5:", my_list_2)

#Output:
#Print #1: [2, 3]
#Print #2: [2, 3]
#Print #3: [3]
#Print #4: [3]
#Print #5: [3]

#if the argument is a list, then changing the value of the corresponding parameter doesn't affect the list (remember: variables containing lists are stored in a different way than scalars)

#but if you change a list identified by the parameter (note: the list, not the parameter!), the list will reflect the change.