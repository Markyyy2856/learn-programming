#include <stdio.h>
#include <stdlib.h>

//Constants - special type of variable whose value cannot be changed
//Use #define or const keyword to declare constants

int main()
{
    const int num = 5; //Declaring a constant variable
    printf("%d\n", num);

    /*
    num = 8; Error because we cannot change the value of a constant variable
    printf("%d", num);
    */

    printf("Hello"); //Hello is constant string
    printf("%d", 45); //45 is constant integer
    return 0;
}