#include <stdio.h>
#include <stdlib.h>

/*
2D Arryas - Situation in an array wherein the elements
            inside an array are actually array themselves.
            Represented by two [][] (width & height).

Nested Loops - Loop inside a loop
*/

int main()
{
    // 2D Arrays
    int nums[3][2] =
        {
            {1, 2},
            {3, 4},
            {5, 6}
        };

    //printf("%d", nums[0][0]); // Accessing an element

    // Nested Loop
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}