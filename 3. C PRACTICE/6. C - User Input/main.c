#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int
    int age; // Declaring age variable to store user input
    printf("Enter your age: ");
    scanf("%d", &age); // Taking user input and storing it in age variable
                       //& pointer is used to get the address of the variable
    printf("You are %d years old.\n", age);

    // float
    double gpa; // Declaring gpa variable to store user input
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);               // Taking user input and storing it in gpa variable
                                      //%lf is used for double data type
    printf("Your GPA is %f.\n", gpa); // Displaying GPA with 2 decimal places

    // char
    char grade; // Declaring grade variable to store user input
    printf("Enter your grade: ");
    scanf(" %c", &grade); // Taking user input and storing it in grade variable
                          // Space before %c is used to ignore any whitespace characters
    printf("Your grade is %c.\n", grade);

    // string
    char name[20]; // Declaring name variable to store user input 20 characters
    printf("Enter your name: ");
    scanf("%s", name); // Taking user input and storing it in name variable
                       // No & is used for string as the array name is already a pointer
    printf("Your name is %s.\n", name);

    fgets(name, 20, stdin); // Using fgets to read a string with spaces
    printf("Your name is %s ghff \n", name);
    return 0;
}