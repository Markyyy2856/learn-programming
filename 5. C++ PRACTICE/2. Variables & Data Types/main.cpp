#include <iostream>

/*
Data Types:
char - 1 single character ('T')
string - string of characters ("John")
int - whole numbers (1)
float - decimal numbers (1.25)
double - can store more decimal points than float
bool - true or false value
*/

using namespace std;

int main() {

    //Variables
    string name = "John";
    int age = 20;

    cout << "There was a man named " << name << endl;
    cout << "He was " << age << " years old" << endl;

    //Changing the name
    name = "Bob";

    //Trying to manually add std
    std::cout << "He like the name " << name << std::endl;
    std::cout << "But he doesn't like being " << age << std::endl;
    return 0;

}