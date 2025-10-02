#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret_num = 5;
    int guess;
    int guess_counter = 0;
    int guess_limit = 3;
    int out_of_guess = 0;

    while(guess != secret_num && out_of_guess == 0)
    {
        if (guess_counter < guess_limit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guess_counter++;
        }
        else
        {
            out_of_guess = 1;
        }
    }
    
    if(out_of_guess == 1)
    {
        printf("Out of Guesses");
    }
    else
    {
        printf("You Win!");
    }
    return 0;
}