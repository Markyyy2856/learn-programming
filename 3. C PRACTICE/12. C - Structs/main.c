#include <stdio.h>
#include <stdlib.h>

/*
Structs - a way to group different variables under one name.
Unlike arrays (which store many values of the same type), a struct can store values of different types together.
*/

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%f", student2.gpa);

    return 0;
}

/*
Example 1:

struct Book{
    char title[50];
    char author[50];
    int year;
};

#include <stdio.h>

int main() {
    struct Book book1 = {"Circe", "Madeline Miller", 2018};

    printf("Book Title: %s", book1.title);
    printf("\nAuthor: %s", book1.author);
    printf("\nYear: %d", book1.year);

    return 0;
}
*/

/*
//Version 1 : 
#include <stdio.h> 
#include <stdlib.h>

struct Book
{
    char title[50];
    char author[50];
    int year;
};

int main()
{
    struct Book novels[3] = 
    {
    {"Circe", "Madeline Miller", 2018}, 
    {"1984", "George Orwell", 1949}, 
    {"The Great Gatsby", "F.Scott Fitzgerald", 1925}
    };
    
    for (int i = 0; i < 3; i++)
    {
        printf("Book Title: %s\n", novels[i].title);
        printf("Author: %s\n", novels[i].author);
        printf("Year: %d\n\n", novels[i].year);
    }
    return 0;
}

//Version 2 : 
#include <stdio.h> 
#include <stdlib.h>

struct Book
{
    char title[50];
    char author[50];
    int year;
};

int main()
{
    struct Book novels[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Book Title #%d: ", i + 1); 
        // Format specifier to read a line of text with spaces 
        scanf(" %[^\n]s", &novels[i].title); 
        
        printf("Enter Author #%d: ", i + 1); 
        scanf(" %[^\n]s", &novels[i].author); 
        
        printf("Enter Year #%d: ", i + 1); 
        scanf("%d", &novels[i].year); 
        
        printf("\n");  
    } 
    
    printf("--- Book List ---\n"); 
    
    for (int i = 0; i < 3; i++) 
    { 
        printf("Book Title: %s\n", novels[i].title); 
        printf("Author: %s\n", novels[i].author); 
        printf("Year: %d\n\n", novels[i].year); 
    } 
    
    return 0; 
}
*/