#include <stdio.h>
#include <stdlib.h>

//Array is a collection of items stored at contiguous memory locations.
int main()
{                //index  0  1  2  3  4
    int luckyNumbers[] = {1, 2, 3, 4, 5}; //Array Declaration and Initialization
    printf("%d", luckyNumbers[0]); //Accessing Array Elements which starts from index 0 = 1
    printf("\n%d", luckyNumbers[3]); 

    //Modifying Array Elements
    luckyNumbers[0] = 99; //Changing the value at index 0 from 1 to 99
    printf("\n%d", luckyNumbers[0]);

    //Assigning values to an array
    int numbers[10]; //Array Declaration
    numbers [0] = 25;
    numbers [9] = 50; 
    printf("\n%d", numbers[0]);

    //
    char phrase[20] = "Array";
    return 0;
}