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

    // TESTING MY KNOWLEDGE

    int favNumber;
    double height;
    char lastName;
    char favColor[16];

    printf("Enter your favorite number: ");
    scanf("%d", &favNumber);

    printf("Enter your height in cm: ");
    scanf("%lf", &height);

    printf("Enter the initial of your last name: ");
    scanf(" %c", &lastName);

    // Clear leftover newline before fgets because it gets an error
    while (getchar() != '\n')
        ;

    printf("Enter your favorite color: ");
    fgets(favColor, 16, stdin);
    favColor[strcspn(favColor, "\n")] = 0; // strip newline

    printf("\nYour favorite number is %d.", favNumber);
    printf("\nYour height is %.2f, as tall as a giraffe!", height);
    printf("\nThe first letter of your last name is %c.", lastName);
    printf("\nLastly, your favorite color is %s.", favColor);

    // Example 1
    char initial;
    int age;

    printf("Enter you name's first letter: ");
    scanf(" %c", &initial);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nFirst letter: %c, Age: %d", initial, age);

    // Example 2
    int firstNum;
    int secondNum;

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    printf("\nSum: %d", firstNum + secondNum);
    printf("\nDifference: %d", firstNum - secondNum);
    printf("\nProduct: %d", firstNum * secondNum);
    printf("\nQuotient: %.2f", (float)firstNum / secondNum);

    //Example 3
    char name[20];
    int age;
    float gpa;
    
    printf("Enter your name: ");
    scanf("%s", name);   // removed & here
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    
    printf("\n--- Student Information ---");
    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nGPA: %.2f", gpa);

    return 0;
}