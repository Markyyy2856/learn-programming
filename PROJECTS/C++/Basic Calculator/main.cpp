#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter your second number: ";
    cin >> num2;

    cout << "Result: ";
    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
            cout << num1 / num2;
        else
            cout << "Error: Division by zero!";
    }
    else
    {
        cout << "Invalid operator!";
    }

    cout << endl;

    return 0;
}
