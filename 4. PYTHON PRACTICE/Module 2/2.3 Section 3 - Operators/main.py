#Operators

#Addition (+)
print(2+2)

#Subttraction (-)
print(5-3)

#Multiplication (*)
print(2 * 3)
print(2 * 3.)
print(2. * 3)
print(2. * 3.)

#Division (/)
print(6 / 3)
print(6 / 3.)
print(6. / 3)
print(6. / 3.)

#Integer division/floor division (//)
print(6 // 3)
print(6 // 3.)
print(6. // 3)
print(6. // 3.)

#Modulo/Remainder (%)
print(14 % 4)
print(12 % 4.5)

#Exponent (**)
print(2 ** 3)
print(2 ** 3.)
print(2. ** 3)
print(2. ** 3.)

#Operators & Priorities
# 1 - **
# 2 - + , - (unary) (addition & subtraction)
# 3 - * , / , // , %
# 4 - + , - (binary) (positive & negative)

#Bindings of equal priority - left-sided
print(2 + 3 * 5)
print(9 % 6 % 2)

#Exponent uses right-sided binding
print(2 ** 2 ** 3)

#Operators and parentheses
print((5 * ((25 % 13) + 100) / (2 * 13)) // 2)