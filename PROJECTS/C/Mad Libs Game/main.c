#include <stdio.h>
#include <stdlib.h>

// MAD LIBS GAME
int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityFname[20];
    char celebrityLname[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity first name: ");
    scanf("%s", celebrityFname);
    printf("Enter a celebrity last name: ");
    scanf("%s", celebrityLname);

    printf("Roses are %s\n", color);
    printf("%s are blue,\n", pluralNoun);
    printf("I love %s %s\n", celebrityFname, celebrityLname); // Print full name
    return 0;
}