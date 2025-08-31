// Conditional Statements (if, else if, else)

// In C, if statements let your program make decisions based on conditions.

/*
if (condition) → runs only if condition is true.

else if (condition) → checks another condition.

else → runs if none of the above are true.

Comparison operators:

    == (equal to), != (not equal to)

    > (greater than), < (less than)

    >= (greater than or equal), <= (less than or equal)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example 1
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    // Example 2
    float grades;

    printf("Enter your grade: ");
    scanf("%f", &grades);

    if (grades < 0 || grades > 100)
    {
        printf("Invalid grade input");
    }
    else if (grades >= 90.0)
    {
        printf("Excellent");
    }
    else if (grades >= 75.0)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }

    // Example 3
    int year;

    printf("--- Leap Year Identifier ---");
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if (year < 1582)
    {
        printf("%d is not in the Gregorian calendar");
    }
    else if (year % 400 == 0)
    {
        printf("%d is a Leap Year");
    }
    else if (year % 100 == 0)
    {
        printf("%d is Not a Leap Year");
    }
    else if (year % 4 == 0)
    {
        printf("%d is a Leap Year");
    }
    else
    {
        printf("Invalid Year.");
    }

    // Version 2:
    int year;
    printf("--- Leap Year Identifier ---");
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if (year < 1582)
    {
        printf("%d is not in the Gregorian calendar\n", year);
    }
    else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap Year\n", year);
    }
    else
    {
        printf("%d is Not a Leap Year\n", year);
    }

        return 0;
    }