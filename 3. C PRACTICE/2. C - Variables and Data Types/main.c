#include <stdio.h>
#include <stdlib.h>

//Variable - a container to store data
//Data types - int, float, char, double, etc.
// 1. int - Integer data type to store whole numbers
// 2. float - Floating point data type to store decimal numbers
// 3. double - Double precision floating point data type to store larger decimal numbers
// 4. char - Character data type to store single characters
// 5. void - Represents the absence of a value or type

int main()
{
    char name[] = "David"; //Storing a string name
    int age = 55; //Storing an integer age

    printf("There once was a man named %s.\n", name); //%s means inserting a string
    printf("He was %d years old.\n", age); //%d means inserting an integer

    age = 23; //Re-assigning age variable
    printf("He really liked the name %s.\n", name);
    printf("But didn't like being %d.\n", age);
    return 0;

    //Example of declaring variables of different data types
    int age = 25;      // Declaring an integer variable named age and initializing it with value 25
    double gpa = 1.50; // Declaring a double variable named gpa and initializing it with value 3.75
    char grade = 'A';  // Declaring a char variable named grade and initializing it with value 'A'
    char name[] = "Mark"; // Declaring a string (array of characters) named name and initializing it with value "Mark"
}