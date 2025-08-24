#include <stdio.h>
#include <stdlib.h>

//Functions - collection of code that performs a specific task
int main()
{
    printf("HI!\n");
    userWelcome(); //function call
    sayHi("Mark", 23); //Function call with argument
    printf("\nBye!");
    return 0;
}

void userWelcome() //Does not return any value
{
    printf("\nWelcome User"); 
}

//Function with parameters 
void sayHi(char name[], int age) 
{
    printf("\nHello %s you are %d years old", name, age);
}

