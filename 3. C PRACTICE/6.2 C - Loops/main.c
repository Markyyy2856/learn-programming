// Loops in C

// Loops let us repeat a block of code without writing it over and over.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // while loop - Repeats while the condition is true.

    int i = 1;

    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    // for loop - Most common loop. Good when you know how many times to repeat.

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    // do while loop - Runs at least once, even if condition is false.

    int i = 1;

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    // Example: Print 1-10
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    // Even Numbers
    int i;

    for (i = 2; i <= 20; i += 2)
    {
        printf("%d ", i);
    }

    // Multiplication Table
    int num;
    int i;
    int product;

    printf("--- Multiplication Table from 1-10 ---");
    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        product = num * i;

        printf("\n%d x %d = %d", num, i, product);
    }

    printf("\n");

    return 0;
}