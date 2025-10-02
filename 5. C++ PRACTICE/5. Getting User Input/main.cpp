#include <iostream>

using namespace std;

int main() {
    /*
    cin object (stands for character input).

    cin is used along with the extraction operator
    >> to take values from the user and store them in variables.

    For multiple words (like full names or sentences), 
    we use getline(cin, variable) instead of cin.
    */

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);  // reads full line including spaces

    cout << "Enter your age: ";
    cin >> age;  // reads one word/number

    cout << "Hello " << name << "! You are " << age << " years old." << endl;
    
    //Example 2
    int favNum;

    cout << "Enter you favorite number: ";
    cin >> favNum;
    cout << "Your favorite number is " << favNum;

    // Example 3
    double num1;
    double num2;
    string name;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cin.ignore(); // Clear the newline
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hi " << name << "! Here are the result of your numbers:" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    
    return 0;
}