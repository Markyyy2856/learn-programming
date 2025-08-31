#include <stdio.h>
#include <stdlib.h>

// Array is a collection of items stored at contiguous memory locations.
int main()
{                                         // index  0  1  2  3  4
    int luckyNumbers[] = {1, 2, 3, 4, 5}; // Array Declaration and Initialization
    printf("%d", luckyNumbers[0]);        // Accessing Array Elements which starts from index 0 = 1
    printf("\n%d", luckyNumbers[3]);

    // Modifying Array Elements
    luckyNumbers[0] = 99; // Changing the value at index 0 from 1 to 99
    printf("\n%d", luckyNumbers[0]);

    // Assigning values to an array
    int numbers[10]; // Array Declaration
    numbers[0] = 25;
    numbers[9] = 50;
    printf("\n%d", numbers[0]);

    //
    char phrase[20] = "Array";

    // Single Grade Look-up
    int grades[] = {90, 85, 95, 78, 88};
    int third_grade = grades[2]; // Assigning grades index 2 to second_grade(95)

    printf("Your third grade is: %d", third_grade);

    // Three-Grade Average
    int grades[] = {88, 92, 75, 95, 85}; // 1. Initialize grades array

    int sum_of_grades; // 2. Access and sum grades
    sum_of_grades = grades[0] + grades[2] + grades[4];

    float average; // 3. Calculate the average
    average = (float)sum_of_grades / 3;

    printf("The average of your 1st, 3rd, and 5th grade is: %f", average);

    // Grade Adjustment
    int grades[] = {80, 75, 90, 68}; // Declare and initialize grade array

    int original_grade = grades[3]; // Access aand print original grade
    printf("Your original grade is: %d", original_grade);

    grades[3] = 70; // Modify the array element
    int new_grade = grades[3];
    printf("\nYour new grade is: %d", new_grade);

    // Example 1
    int numbers[5];
    int i;

    for (i = 0; i < 5; i++) // Loop for number insertion
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered: ");

    for (i = 0; i < 5; i++) // Loop for accessing loop contents
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Example 2
    float grades[5];
    int i;
    float sum;
    float average;

    for (i = 0; i < 5; i++) // Loop for grades insertion with validation
    {
        do
        {
            printf("Enter grade #%d (0-100): ", i + 1);
            scanf("%f", &grades[i]);

            if (grades[i] < 0 || grades[i] > 100)
            {
                printf("Invalid grade! Please enter a value between 0 and 100.\n");
            }
        } 
        while (grades[i] < 0 || grades[i] > 100);
    }

    printf("\nGrades entered: ");

    for (i = 0; i < 5; i++) // Loop for accessing grades and sum
    {
        printf("%.2f ", grades[i]);

        sum += grades[i];
    }

    average = sum / 5;

    printf("\nAverage: %.2f", average);

    printf("\nResult: ");

    if (average < 0 || average > 100)
    {
        printf("Invalid grades.");
    }
    else if (average >= 90)
    {
        printf("Excellent");
    }
    else if (average >= 75)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }

    //Example 3
    #define array_size 10

    int num[array_size]; //Storage of all inserted numbers 
    int i = 0; 
    
    printf("--- Finding the Highest and Lowest Number ---\n"); 
    
    //Loop for user input 
    for (i = 0; i < array_size; i++) 
    { 
        printf("Enter #%d: ", i + 1);
        scanf("%d", &num[i]); 
    } 
    
    //Loop array content 
    printf("\nNumbers entered: "); 
    
    for (i = 0; i < array_size; i++) 
    { 
        printf("%d ", num[i]); //Iterates and print list on single line 
    } 

    printf("\n");

    //Loop for Highest and Lowest 
    int highest = num[0]; //Storage of highest 
    int lowest = num[0]; //Storage of lowest 
    
    for (i = 1; i < array_size; i++) 
    { 
        if (num[i] > highest) 
        { 
            highest = num[i]; 
        } 
        
        if (num[i] < lowest) 
        { 
            lowest = num[i]; 
        } 
    } 
    
    printf("\nHighest number: %d", highest); 

    printf("\nLowest number: %d", lowest); 
    
    if (highest % 2 != 0) 
    { 
        printf("\nThe highest number is odd."); 
    } 
    else 
    { 
        printf("\nThe highest number is even."); 
    } 
    
    printf("\n");

    return 0;
}