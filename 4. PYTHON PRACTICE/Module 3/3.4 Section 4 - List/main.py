#List

#Indexing List
numbers = [10, 5, 7, 2, 1]
print("Original list contents:", numbers)  # Printing original list contents.
 
numbers[0] = 111
print("\nPrevious list contents:", numbers)  # Printing previous list contents.
 
numbers[1] = numbers[4]  # Copying value of the fifth element to the second.
print("New list contents:", numbers)  # Printing current list contents.

##############
#Accessing list content
#len() function lets you see the lists' current length
print("\nList length:", len(numbers))  

print(numbers) # Printing the whole list.

##############
#Removing elements from the list
#del() function lets you delete an element on a list
del numbers[1]  
print("New list's length:", len(numbers)) 
print("\nNew list content:", numbers)

##############
#Negative indices are legal
numbers = [111, 7, 2, 1]
print(numbers[-1]) #-1 is the last one in the list

#LAB The basics of lists
hat = [1, 2, 3, 4, 5]

number = int(input("Enter a number to replace in the middle: "))
hat[2] = number

del(hat[-1])

print("Hat list length: " , len(hat))
print(hat)

##############
#Function vs. methods
#result = data.method(arg)

#3.4.8 Adding elements to a list: append() and insert()

#insert() - can add new element at any place on the list
#list.insert(location, value)
numbers = [111, 7, 2, 1]
print(len(numbers))
print(numbers)

###

numbers.append(4) #inserts at the end of list since no location given

print(len(numbers)) #after adding, increases list length
print(numbers)

###

numbers.insert(0, 222)  #inserts 222 at the first index(0)
print(len(numbers))
print(numbers)

#Example 1:
my_list = []  # Creating an empty list.

for i in range(5):
    my_list.append(i + 1)

print(my_list)

#Example 2:
#Given 0 as the index inside the loop, it iterates +1 everytime in range(5)
#Every iteration, it adds to the list, in index 0
#[1]
#[2, 1] until
#[5, 4, 3, 2, 1]
my_list = []  # Creating an empty list.
 
for i in range(5):
    my_list.insert(0, i + 1)
 
print(my_list)

##############
#Making use of lists
my_list = [10, 1, 8, 3, 5]
total = 0 #Variable to store the sum of the list

for i in my_list:
    total += i #Sums everything inside list

print(total)

#List in action
#Swapping positions
my_list = [10, 1, 8, 3, 5]

my_list[0], my_list[4] = my_list[4], my_list[0]
my_list[1], my_list[3] = my_list[3], my_list[1]

print(my_list)

#3.4.11 LAB The basics of lists ‒ the Beatles
beatles = []
print("Step 1: ", beatles)

beatles.append("John Lennon")
beatles.append("Paul McCartnery")
beatles.append("George Harrison")
print("Step 2: ",beatles)


for i in range(2):
    members = input("Enter another member: ")
    beatles.append(members)
print("Step 3: ", beatles)

del(beatles[-1])
del(beatles[-1])
print("Step 4: ", beatles)

beatles.insert(0, "Ringo Starr")
print("Step 5: ", beatles)

# testing list legth
print("The Fab", len(beatles))

