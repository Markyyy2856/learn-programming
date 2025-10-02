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

/*using namespace std;*/

int main() {

    //Variables
    /*
    string name = "John";
    int age = 20;

    cout << "There was a man named " << name << endl;
    cout << "He was " << age << " years old" << endl;

    //Changing the name
    name = "Bob";
    

    //Trying to manually add std
    std::cout << "He like the name " << name << std::endl;
    std::cout << "But he doesn't like being " << age << std::endl;
    */

    /*
    char grade = 'A';
    std::string myName = "Mark";
    int age = 23;
    */

    //Example 1
    using namespace std;
    string name = "Mark";
    int age = 20;
    int favNum = 7;
    
    cout << "Hello, my name is " << name << ". I am " << age << " years old and my favorite number is " << favNum << ".";

    //Example 2
    double num1 = 10;
    double num2 = 4;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;

    //Example 3
    string fname = "Mark";
    string lname = "Reyes";
    int birthYear = 2001;
    int currentYear = 2025;
    int age = currentYear - birthYear;

    cout << "My name is " << fname << " " << lname << ", I am " << age << " years old." ;
    
    //Example 4
    int num1 = 42;
    double pi = 3.14;
    char letter = 'X';
    string word = "Hello";
    bool num2 = 1;

    cout << "Integer: " << num1 << endl;
    cout << "Double: " << pi << endl;
    cout << "Character: " << letter << endl;
    cout << "String: " << word << endl;
    cout << "Boolean: " << num2 << endl;
    
    return 0;

}