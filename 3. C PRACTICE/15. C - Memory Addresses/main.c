#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //Printing out Physical Mmemory Addrees using %p
    //%p - Stands for pointer
    //Uses an ampersand to access address of specific variable
    
    printf("age: %p \ngpa: %p \ngrade: %p", &age, &gpa, &grade);
    

    return 0;
}