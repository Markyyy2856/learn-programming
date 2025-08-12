#Tuples and dictionaries

#Tuples
#tuples prefer to use parenthesis, lists uses brackets
#it's also possible to create a tuple just from a set of values separated by commas
tuple_1 = (1, 2, 4, 8)
tuple_2 = 1., .5, .25, .125

print(tuple_1)
print(tuple_2)

#How to create a tuple
#It is possible to create an empty tuple – parentheses are required then:
empty_tuple = ()

#One element tuple
one_element_tuple_1 = (1, ) #required to add a comma
one_element_tuple_2 = 1.    #if removed, will output a variable instead of tuple

print(one_element_tuple_1)  #Output: (1) a single tuple
print(one_element_tuple_2)  #Output: 1.0 not a tuple 

#How to use tuple
my_tuple = (1, 10, 100, 1000)

print(my_tuple[0])
print(my_tuple[-1])
print(my_tuple[1:])
print(my_tuple[:-2])

for elem in my_tuple:
    print(elem)

#UNLIKE LISTS, YOU CAN'T MODIFY ITS CONTENT
my_tuple = (1, 10, 100, 1000)
 
my_tuple.append(10000)
del my_tuple[0]
my_tuple[1] = -10
#AttributeError: 'tuple' object has no attribute 'append'

#What tupples can do?
#The len() function accepts tuples, and returns the number of elements contained inside;
#The + operator can join tuples together (we've shown you this already)
#The * operator can multiply tuples, just like lists;
#The in and not in operators work in the same way as in lists.

my_tuple = (1, 10, 100)

t1 = my_tuple + (1000, 10000)
t2 = my_tuple * 3

print(len(t2))
print(t1)
print(t2)
print(10 in my_tuple)
print(-10 not in my_tuple)

#Ability to appear on the left side of the assignment operator
var = 123

t1 = (1, )
t2 = (2, )
t3 = (3, var)

t1, t2, t3 = t2, t3, t1

print(t1, t2, t3)

#Output: (2,) (3, 123) (1,)

###############################
#Dictionaries
#How to make a dictionary
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}
phone_numbers = {'boss': 5551234567, 'Suzy': 22657854310}
empty_dictionary = {}
 
print(dictionary)
print(phone_numbers)
print(empty_dictionary)

#How to use dictionary
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}
phone_numbers = {'boss' : 5551234567, 'Suzy' : 22657854310}
empty_dictionary = {}

print(dictionary['cat'])
print(phone_numbers['Suzy'])

#If the key is a string, you have to specify it as a string;
#Keys are case-sensitive: 'Suzy' is something different from 'suzy'.


#Using in and not in
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}
words = ['cat', 'lion', 'horse']

for word in words:
    if word in dictionary:
        print(word, "->", dictionary[word])
    else:
        print(word, "is not in dictionary")


#Hanging indent for easy readability
# Example 1:
dictionary = {
              "cat": "chat",
              "dog": "chien",
              "horse": "cheval"
}
# Example 2:
phone_numbers = {'boss': 5551234567,
              'Suzy': 22657854310
}

#Dictionary methods and functions
#using for loop
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

for key in dictionary.keys():
    print(key, "->", dictionary[key])

#using item()
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

for english, french in dictionary.items():
    print(english, "->", french)

#Modifying and adding values
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

dictionary['cat'] = 'minou'
print(dictionary)

#if you want it sorted 
#for key in sorted(dictionary.keys()):

#using values()
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

for french in dictionary.values():
    print(french)

#adding a new key
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

dictionary['swan'] = 'cygne'
print(dictionary)

#You can also insert an item to a dictionary by using the update() method
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

dictionary.update({"duck": "canard"})
print(dictionary)

#Removing a key will also remove its value
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

del dictionary['dog']
print(dictionary)

#To remove the last item in a dictionary, you can use the popitem() method:
dictionary = {"cat": "chat", "dog": "chien", "horse": "cheval"}

dictionary.popitem()
print(dictionary)    # outputs: {'cat': 'chat', 'dog': 'chien'}

######################
#Tuples and dictionaries can work together
school_class = {}

while True:
    name = input("Enter the student's name: ")
    if name == '':
        break
    
    score = int(input("Enter the student's score (0-10): "))
    if score not in range(0, 11):
	    break
    
#    if name in school_class:
#        school_class[name] += (score,)
#    else:
#        school_class[name] = (score,)
        
for name in sorted(school_class.keys()):
    adding = 0
    counter = 0
    for score in school_class[name]:
        adding += score
        counter += 1
    print(name, ":", adding / counter)