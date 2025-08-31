#include <stdio.h>
#include <stdlib.h>

// Functions - collection of code that performs a specific task
/*
int main()
{
    printf("HI!\n");
    userWelcome(); //function call
    sayHi("Mark", 23); //Function call with argument
    printf("\nBye!");
    return 0;
}

void userWelcome() //void means does not return any value
{
    printf("\nWelcome User");
}

//Function with parameters
void sayHi(char name[], int age)
{
    printf("\nHello %s you are %d years old", name, age);
}

*/

// Activity 1: Function for Addition
/*
//Declare first the function
int addNumbers(int num1, int num2);

int main()
{
    int a, b, result;

    //User-input numbers
    printf("Enter first number: "); scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    //Function call after variables a and b have been assigned
    result = addNumbers(a, b);

    //Printing entered numbers and their sum
    printf("\nYou entered: %d and %d", a, b);
    printf("\nSum = %d", result);

    return 0;
}

//Function definition
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}
*/

// Activty 2: Find the highest Number Using a Function
/*
#define array_size 5

// Declare first the function
// Uses pointer * to an integer(num)
int highestnum(int *num, int size);

int main()
{
    int num[array_size];
    int i;
    int result;

    printf("--- Find the Highest Number Using a Function ---\n\n");

    // Loop for user-input numbers
    for (i = 0; i < array_size; i++)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Function call for highest
    result = highestnum(num, array_size);

    // Printing entered numbers
    printf("\nNumbers entered: ");
    for (i = 0; i < array_size; i++)
    {
        printf("%d ", num[i]); // Prints list on single line
    }

    // Printing highest number
    printf("\nThe highest number is: %d", result);

    return 0;
}

// Function definition
int highestnum(int *num, int size)
{
    int highest = num[0];
    int i;

    // Loop for checking highest number
    for (i = 1; i < size; i++)
    {
        if (num[i] > highest)
        {
            highest = num[i];
        }
    }

    return highest;
}
*/

// Activity 3: Count Even and Odd Numbers Using a Function
/*
#define array_size 5

// Declare first the function
// Uses pointer *
void countEvenOdd(int *num, int size, int *counterOdd, int *counterEven);

int main()
{

    printf("--- Count Even and Odd Numbers Using a Function ---\n\n");

    int num[array_size];
    int i;

    // Counter variables
    int counterOdd = 0;
    int counterEven = 0;

    for (i = 0; i < array_size; i++) // Loop for number insertion
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &num[i]); // Every iteration stores inside array
    }

    // Function call
    countEvenOdd(num, array_size, &counterOdd, &counterEven);

    // Loop array content
    printf("\nNumbers entered: ");
    for (i = 0; i < array_size; i++)
    {
        printf("%d ", num[i]); // Iterates and print list on single line
    }

    printf("\n");

    // Printing Odd and Even
    printf("Odd count = %d", counterOdd);
    printf("\nEven count = %d", counterEven);

    return 0;
}

// Function definition
void countEvenOdd(int *num, int size, int *counterOdd, int *counterEven)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (num[i] % 2 != 0)
        {
            (*counterOdd)++;
        }
        else
        {
            (*counterEven)++;
        }
    }
}
*/