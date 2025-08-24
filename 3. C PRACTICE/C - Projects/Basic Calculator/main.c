#include <stdio.h>
#include <stdlib.h>

// %s - string format specifier
// %d - integer format specifier
// %f - float format specifier, used with printf for float and double
// %lf - double format specifier, used with scanf
// %c - character format specifier

//BASIC CALCULATOR
int main()
{
    double num1; // First number
    double num2; // Second number

    printf("Enter first number: ");
    scanf("%lf", &num1); //Store value entered to num1

    printf("Enter second number: ");
    scanf("%lf", &num2); //Store value entered to num2

    printf("Answer: %f", num1 + num2);

    
    return 0;
}