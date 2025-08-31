#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Printf() function is used to print text to the console
    int favNum = 9;
    char myChar = 'A';
    printf("Hello, World!\n");
    printf("My favorite number is %d\n", 9);                           // Integer
    printf("My favorite %s is %d\n", "number", 9);                     // String and Integer
    printf("My favorite number is %d and my age is %d\n", favNum, 23); // Multiple variables
    printf("My favorite character is %c\n", myChar);                   // Character

    // Working with numbers
    printf("%f", 5.0 + 4.0); // Float
    printf("\n%d", 5 + 4);   // Integer

    int num = 10;
    printf("\n%d", num); // Printing variable num

    printf("\n%f", pow(2, 3));    // Power function
    printf("\n%f", sqrt(36));     // Square root function
    printf("\n%f", ceil(15.63));  // Rounds up
    printf("\n%f", floor(15.63)); // Rounds down

    //Example 1
    int age = 20; 
    float height = 5.789;
    char initial = 'M';
    
    printf("Age: %d | ", age);
    printf("Height: %.2f | ", height);
    printf("Initial: %c", initial);

    //Exampple 2
    int a = 7, b = 3; 
    
    printf("a = %d, b = %d\n", a, b); 
    printf("Sum = %d\n", a + b); 
    printf("Difference = %d\n", a - b); 
    printf("Product = %d\n", a * b); 
    printf("Quotient = %.2f", (float)a / b);
    return 0;
}