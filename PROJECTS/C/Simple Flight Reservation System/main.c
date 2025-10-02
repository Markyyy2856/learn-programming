// FLIGHT RESERVATION SYSTEM 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// Constants 
#define ROWS 5 
#define COLS 4 
#define MAX_PASSENGERS (ROWS * COLS) 
#define MAX_NAME_LENGTH 50 

// Structs to hold passenger data 
struct Passenger { 
    char name[MAX_NAME_LENGTH]; 
    int row; 
    char col; 
}; 

void initializeSeats(char seats[ROWS][COLS]); 
void displaySeatMap(char seats[ROWS][COLS]); 
void bookSeat(char seats[ROWS][COLS], struct Passenger *passengers, int *bookingCount); 
void saveBookingsToFile(struct Passenger *passengers, int bookingCount); 

int main() { 
    char seats[ROWS][COLS]; 
    struct Passenger passengers[MAX_PASSENGERS]; 
    int bookingCount = 0; 
    int choice; 

    initializeSeats(seats); 

    // Loop for the main menu 
    while (1) { 
        // Automatically displays seat map on the main menu 
        displaySeatMap(seats); 

        // Main menu 
        printf("\n--- Ready to fly with us? ---\n"); 
        printf("1. Book a Seat\n"); 
        printf("2. Save Bookings and Exit\n"); 
        printf("Enter your choice: "); 

        // User Input 
        if (scanf("%d", &choice) != 1) { 
            printf("Invalid input. Please enter a number.\n"); 
            // Clear the input buffer 
            while (getchar() != '\n'); 
            continue; 
        } 

        switch (choice) { 
            case 1: 
                // Passing the address of bookingCount 
                bookSeat(seats, passengers, &bookingCount); 
                break; 
            case 2: 
                // Writing Files 
                saveBookingsToFile(passengers, bookingCount); 
                printf("Booking information saved to bookings.txt. Exiting program.\n"); 

                return 0; 
            default: 
                printf("Invalid choice. Please try again.\n"); 
                break; 
        } 
    } 
} 

void initializeSeats(char seats[ROWS][COLS]) { 
    // 2D Arrays & Nested Loops for seat map 
    for (int i = 0; i < ROWS; i++) { 
        for (int j = 0; j < COLS; j++) { 
            seats[i][j] = 'O'; 
        } 
    } 
} 

// Displays the current seat map. 
void displaySeatMap(char seats[ROWS][COLS]) { 
    printf("\n\n\n------ MARK AIRLINES ------\n"); 
    printf("(O = Available, X = Taken)\n\n"); 
    printf("    A   B   C   D\n"); // Column headers 
    for (int i = 0; i < ROWS; i++) { 
        printf("%d | ", i + 1); // Row headers 
        for (int j = 0; j < COLS; j++) { 
            printf("[%c] ", seats[i][j]); 
        } 
        printf("|\n"); 
    } 
} 

// This function handles the logic for booking a seat. 
void bookSeat(char seats[ROWS][COLS], struct Passenger *passengers, int *bookingCount) { 
    int row; 
    char col_char; 
    int col; 
    char name_input[MAX_NAME_LENGTH]; 

    if (*bookingCount >= MAX_PASSENGERS) { 
        printf("Sorry, the flight is fully booked.\n"); 
        return; 
    } 

    printf("\nEnter passenger's first name: "); 
    scanf("%s", name_input); 

    printf("Enter desired seat (e.g., 3B): "); 
    scanf("%d %c", &row, &col_char); // Add a space before %c 

    // Convert column character to index (A=0, B=1, etc.) 
    if (col_char >= 'a' && col_char <= 'z') { 
        col = col_char - 'a'; 
    } else { 
        col = col_char - 'A'; 
    } 
    
    // Adjust row to be 0-indexed 
    row--; 

    // Seat validation 
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) { 
        printf("\nInvalid seat number. Please choose a valid seat.\n"); 
    } else if (seats[row][col] == 'X') { 
        printf("\nThis seat is already taken. Please choose another one.\n"); 
    } else { 
        // Mark seat as taken 
        seats[row][col] = 'X'; 

        // Store passenger info 
        strcpy(passengers[*bookingCount].name, name_input); 
        passengers[*bookingCount].row = row + 1; 
        passengers[*bookingCount].col = col + 'A'; 

        // Increment the booking counter using the pointer 
        (*bookingCount)++; 

        printf("\nSeat %d%c successfully booked for %s.\n", row + 1, col + 'A', name_input); 
    } 
    // A small pause to allow the user to see the result before the screen clears 
    printf("Press Enter to continue..."); 
    while (getchar() != '\n'); // Clear previous newline 
    getchar(); // Wait for user to press Enter 
} 

// This function saves all booking records to bookings.txt. 
void saveBookingsToFile(struct Passenger *passengers, int bookingCount) { 
    FILE *file_pointer; // Variable to act as a pointer to the file 

    // Open the file in "write" mode. It will be created if it doesn't exist. 
    file_pointer = fopen("bookings.txt", "w"); 

    if (file_pointer == NULL) { 
        printf("Error: Could not open file to save bookings.\n"); 
        return; 
    } 

    fprintf(file_pointer, "--- Flight Booking Records ---\n"); 
    fprintf(file_pointer, "Total Bookings: %d\n\n", bookingCount); 

    for (int i = 0; i < bookingCount; i++) { 
        fprintf(file_pointer, "Passenger: %s, Seat: %d%c\n", 
                passengers[i].name, 
                passengers[i].row, 
                passengers[i].col); 
    } 

    // Close the file 
    fclose(file_pointer); 
}