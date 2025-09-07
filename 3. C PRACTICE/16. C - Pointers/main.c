#include <stdio.h>
#include <stdlib.h>

/*
Pointers - a type of data, a memory address - physical address inside of
the memory of computer
 */

int main()
{
    /*
    int age = 30;
    int * pAge = &age; //Pointer variable to store the memory address of age variable

    double gpa = 3.4;
    double * pGPA = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    */


    //Dereferencing Pointers
    int age = 30;
    int * pAge = &age;

    printf("%d", *pAge);
    return 0;
}