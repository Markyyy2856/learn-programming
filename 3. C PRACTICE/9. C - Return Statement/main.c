#include <stdio.h>
#include <stdlib.h>

// A special line of code that we can include in functions, which will allow them to return information.

/*
double cube(double num)
{
    double result = num * num * num;
    return result;
}
*/

double cube(double num);

int main()
{
    printf("Answer: %f", cube(3.0));
    return 0;
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}