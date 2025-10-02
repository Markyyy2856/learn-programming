#include <stdio.h>
#include <stdlib.h>

// %s - string format specifier
// %d - integer format specifier
// %f - float format specifier, used with printf for float and double
// %lf - double format specifier, used with scanf
// %c - character format specifier. Add a space infront for it to work.

//BASIC CALCULATOR
int main()
{
    double num1; // First number
    double num2; // Second number
    char op;

    printf("BASIC CALCULATOR(+ - * /)\n\n");

    printf("Enter first number: ");
    scanf("%lf", &num1); //Store value entered to num1
    printf("Enter an operator: ");
    scanf(" %c", &op);   //Store operator entered to op

    printf("Enter second number: ");
    scanf("%lf", &num2); //Store value entered to num2

    if(op == '+')
    {
        printf("Answer: %.2f", num1 + num2);
    }
    else if(op == '-')
    {
        printf("Answer: %.2f", num1 - num2);
    }
    else if(op == '*')
    {
        printf("Answer: %.2f", num1 * num2);
    }
    else if(op == '/')
    {
        printf("Answer: %.2f", num1 / num2);
    }
    else
    {
        printf("Invalid operator.");
    }

    
    return 0;
}