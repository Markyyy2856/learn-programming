#include <stdio.h>
#include <stdlib.h>

// A constant for the number of grades.
#define NUM_GRADES 5

// Function to calculate the sum of grades.
// It takes an integer array and its size as arguments.
// The return type is int.
int calculateSum(int array[], int size)
{
    int sum = 0;
    // Loop through the array to add up all the grades.
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    // Return the total sum.
    return sum;
}

int main()
{
    // Declare an array to store the grades.
    int grades[NUM_GRADES];
    float average = 0.0f;

    // Use a loop to get grades from the user.
    for (int i = 0; i < NUM_GRADES; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // Call the calculateSum function and store the result.
    int totalSum = calculateSum(grades, NUM_GRADES);

    // Calculate the average and ensure it's a float.
    average = (float)totalSum / NUM_GRADES;

    // Print the final result.
    printf("Your average is: %.2f\n", average);

    return 0;
}