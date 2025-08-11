#Returning a result from a function

#Effects and results: the return instruction
#return without an expression

def happy_new_year(wishes = True):
    print("Three...")
    print("Two...")
    print("One...")
    if not wishes: #check if function wishes is false
        return #if false, returns early

    print("Happy New Year!") #otherwise, it'll print this

happy_new_year() #Invoked without arguments

happy_new_year(False) #with arguments, doesnt print Happy 
                      #New Year


#return with an expression
#It causes the immediate termination of the function's
#execution (nothing new compared to the first variant)

#Moreover, the function will evaluate the expression's 
#value and will return it (hence the name once again) as 
#the function's result.
def boring_function():
    return 123

x = boring_function()

print("The boring_function has returned its result. It's:", x)

################################
#A few words about None
def strange_function(n):
    if(n % 2 == 0):
        return True

print(strange_function(2)) #True
print(strange_function(1)) #None

#Doesn't represent any reasonable value ‒ actually, it's 
#not a value at all; hence, it mustn't take part in any 
#expressions.

#Don't be surprised next time you see None as a function 
#result ‒ it may be the symptom of a subtle mistake 
#inside the function.

################################
#Effects and results: lists and functions
def list_sum(lst):
    s = 0   #store running total

    for elem in lst:    #loops the list
        s += elem       #sums every element on list

    return s            #returns value of s (sum)

print(list_sum([5, 4, 3]))  #calls function, primts result

#Another example:
def strange_list_fun(n):
    strange_list = []
    
    for i in range(0, n):
        strange_list.insert(0, i)
    
    return strange_list

print(strange_list_fun(5))


#LAB A leap year: writing your own functions
def is_year_leap(year):
    if year % 4 != 0:
        return False
    elif year % 100 != 0:
        return True
    elif year % 400 != 0:
        return False
    else:
        return True

test_data = [1900, 2000, 2016, 1987]
test_results = [False, True, True, False]
for i in range(len(test_data)):
    yr = test_data[i]
    print(yr,"-> ",end="")
    result = is_year_leap(yr)
    if result == test_results[i]:
        print("OK")
    else:
        print("Failed")

#LAB How many days: writing and using your own functions
def is_year_leap(year):
    if year % 4 != 0:
        return False
    elif year % 100 != 0:
        return True
    elif year % 400 != 0:
        return False
    else:
        return True

def days_in_month(year,month):
    if year < 1582 or month < 1 or month > 12:
        return None
    days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    res  = days[month - 1]
    if month == 2 and is_year_leap(year):
        res = 29
    return res

test_years = [1900, 2000, 2016, 1987]
test_months = [ 2, 2, 1, 11]
test_results = [28, 29, 31, 30]
for i in range(len(test_years)):
    yr = test_years[i]
    mo = test_months[i]
    print(yr,mo,"-> ",end="")
    result = days_in_month(yr, mo)
    if result == test_results[i]:
        print("OK")
    else:
        print("Failed")

#LAB Day of the year: writing and using your own functions
def is_year_leap(year):
    if year % 4 != 0:
        return False
    elif year % 100 != 0:
        return True
    elif year % 400 != 0:
        return False
    else:
        return True

def days_in_month(year, month):
    if year < 1582 or month < 1 or month > 12:
        return None
    days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    res  = days[month - 1]
    if month == 2 and is_year_leap(year):
        res = 29
    return res

def day_of_year(year, month, day):
    days = 0
    for m in range(1, month):
        md = days_in_month(year, m)
        if md == None:
            return None
        days += md
    md = days_in_month(year, month)
    if day >= 1 and day <= md:
        return days + day
    else:
        return None

print(day_of_year(2000, 12, 31))

#LAB Prime numbers ‒ how to find them
def is_prime(num):
    for i in range(2, int(1 + num ** 0.5)):
        if num % i == 0:
            return False
    return True

for i in range(1, 20):
    if is_prime(i + 1):
        print(i + 1, end=" ")
print()

#LAB Converting fuel consumption
# 1 American mile = 1609.344 metres
# 1 American gallon = 3.785411784 litres

def liters_100km_to_miles_gallon(litres):
    gallons = litres / 3.785411784
    miles = 100 * 1000 / 1609.344
    return miles / gallons

def miles_gallon_to_liters_100km(miles):
    km100 = miles * 1609.344 / 1000 / 100
    litres = 3.785411784
    return litres / km100

print(liters_100km_to_miles_gallon(3.9))
print(liters_100km_to_miles_gallon(7.5))
print(liters_100km_to_miles_gallon(10.))
print(miles_gallon_to_liters_100km(60.3))
print(miles_gallon_to_liters_100km(31.4))
print(miles_gallon_to_liters_100km(23.5))
