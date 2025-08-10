#List in advance applicatioon

#Lists in lists
row = []

for i in range(8): #Sets range of list to 8 (0-7)
    row.append(WHITE_PAWN) #Inserts white_pawn to the list


#List Comprehension
row = [WHITE_PAWN for i in range(8)]

    #The part of the code placed inside the brackets specifies: 
        # the data to be used to fill the list (WHITE_PAWN)
        #the clause specifying how many times the data occurs inside the list (for i in range(8))

squares = [x ** 2 for x in range(10)]

    #Sets range to 10 (0-9)
        #Squares each element on list
        #0**2, 1**2, 2**2... and so on to last element
        #Output:(0, 1, 4, 9, 16, 25, 36, 49, 64, 81)

twos = [2 ** i for i in range(8)]

    #Outputs: (1, 2, 4, 8, 16, 32, 64, 128)

odds = [x for x in squares if x % 2 != 0 ]
    #The snippet makes a list with only the odd elements of the squares list.

############################
#Two-dimensional Arrays
board = []

for i in range(8):
    row = [EMPTY for i in range(8)]
    board.append(row)

#Note:
#the inner part of the loop creates a row consisting of eight elements (each of them equal to EMPTY) and appends it to the board list;
#the outer part repeats it eight times; 
#in total, the board list consists of 64 elements (all equal to EMPTY)

#As list comprehensions can be nested, we can shorten the board creation in the following way:
board = [[EMPTY for i in range(8)] for j in range(8)]

