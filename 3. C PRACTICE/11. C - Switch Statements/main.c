#include <stdio.h>
#include <stdlib.h>

/*
Switch Statement - special type of if statement which will 
allow us to compare one value to a bunch of different values.
*/

int main()
{
    char grade = 'A';

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did VERY BAD!");
        break;
    case 'F':
        printf("You Failed!");
        break;
    
    default:
        printf("Invalid grade.");
        break;
    }
    return 0;
}