#Operations on List

#Inner life of lits
list_1 = [1]
list_2 = list_1
list_1[0] = 2
print(list_2) #Outputs 2

#Powerful slices
#Makes a brand new copy of list/parts of list
list_1 = [1]
list_2 = list_1[:]
list_1[0] = 2
print(list_2)

#Example: Copying some part of the list.
my_list = [10, 8, 6, 4, 2]
new_list = my_list[1:3] #Creates new list from index 1-3 but index 3 not included
print(new_list) #Outputs [8, 6]

#Slices – negative indices
#my_list[start:end]
my_list = [10, 8, 6, 4, 2]
new_list = my_list[1:-1]
print(new_list) #Outputs [8, 6, 4]

#If the start specifies an element lying further than the one described by the end (from the list's beginning), the slice will be empty:
my_list = [10, 8, 6, 4, 2]
new_list = my_list[-1:1]
print(new_list) #Outputs []

#################################################
#In other words, the slice of this form:

my_list[:end]
 
#is a more compact equivalent of:

my_list[0:end]

#Example:
my_list = [10, 8, 6, 4, 2]
new_list = my_list[:3]
print(new_list) #Outputs [10, 8, 6]

##################################################
#Similarly, if you omit the end in your slice, it is assumed that you want the slice to end at the element with the index len(my_list).

#In other words, the slice of this form:

my_list[start:]
 
#is a more compact equivalent of:

my_list[start:len(my_list)]

#Example:
my_list = [10, 8, 6, 4, 2]
new_list = my_list[3:]
print(new_list) #Outputs [4, 2]

#And if new_list = my_list[:] produces whole list

################################################
#More about the del instruction
my_list = [10, 8, 6, 4, 2]
del my_list[1:3] #Deletes [8, 6]
print(my_list) #Outputs [10, 4, 2]

################################################
#The in and not in operators
my_list = [0, 3, 12, 8, 2]

print(5 in my_list)       #False
print(5 not in my_list)   #True
print(12 in my_list)      #True

############################################
#Lists – some simple programs
my_list = [17, 3, 11, 5, 1, 9, 7, 15, 13]
largest = my_list[0] #Sets index 0(17) as the largest

for i in range(1, len(my_list)): #Checks starting from index 1 to 9(8th element)
    if my_list[i] > largest:
        largest = my_list[i] 

print(largest)

#
my_list = [17, 3, 11, 5, 1, 9, 7, 15, 13]
largest = my_list[0]

for i in my_list:
    if i > largest:
        largest = i

print(largest)

#
my_list = [17, 3, 11, 5, 1, 9, 7, 15, 13]
largest = my_list[0]
 
for i in my_list[1:]:
    if i > largest:
        largest = i
 
print(largest)

#Find location of a given element
my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
to_find = 5
found = False

for i in range(len(my_list)):
    found = my_list[i] == to_find
    if found:
        break

if found:
    print("Element found at index", i)
else:
    print("absent")

#Let's assume that you've chosen the following numbers in the lottery: 3, 7, 11, 42, 34, 49.
#The numbers that have been drawn are: 5, 11, 9, 42, 3, 49.
#The question is: how many numbers have you hit?
#This program will give you the answer:

drawn = [5, 11, 9, 42, 3, 49]
bets = [3, 7, 11, 42, 34, 49]
hits = 0

for number in bets:
    if number in drawn:
        hits += 1

print(hits)

#3.6.6 LAB Operating with lists ‒ basics
my_list = [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]
unique_list = []

for number in my_list:
    if number not in unique_list:
        unique_list.append(number)

my_list = unique_list

print("The list with unique elements only:")
print(my_list)