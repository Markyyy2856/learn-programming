#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    w - write on file
    a - append information on file
    r - read information from file
    */

    FILE * fpointer = fopen("employees.text", "w");
    //FILE * fpointer = fopen("employees.text", "a");

    //char line [255];
    //FILE * fpointer = fopen("employees.text", "r");
    //fgets(line, 255, fpointer);
    //printf("%s", line);

    fprintf(fpointer, "Jim, Salesman \nPam, Receptionist \nOscar, Accounting");

    fclose(fpointer);
    return 0;
}