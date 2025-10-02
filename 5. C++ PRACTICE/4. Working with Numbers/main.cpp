#include <iostream>
#include <cmath>   // for math functions

using namespace std;

int main() {
    
    //Basic Arithmetic
    int x = 10;
    int y = 3;
    cout << x + y; // 13
    cout << x - y; // 7
    cout << x * y; // 30
    cout << x / y; // 3 (integer division)

    double a = 10;
    double b = 3;
    cout << a / b; // 3.33333

    /*
    Math Functions (#include <cmath>)
    Some useful ones:

    pow(x, y) → x raised to y
    sqrt(x) → square root
    round(x) → round to nearest integer
    floor(x) → round down
    ceil(x) → round up
    fmax(x, y) → larger of two values
    fmin(x, y) → smaller of two values
    */

    cout << "pow(2, 3): " << pow(2, 3) << endl;     // 8
    cout << "sqrt(25): " << sqrt(25) << endl;       // 5
    cout << "round(3.7): " << round(3.7) << endl;   // 4
    cout << "floor(3.7): " << floor(3.7) << endl;   // 3
    cout << "ceil(3.2): " << ceil(3.2) << endl;     // 4
    cout << "fmax(10, 20): " << fmax(10, 20) << endl; // 20
    cout << "fmin(10, 20): " << fmin(10, 20) << endl; // 10


    //Example 1
    double num1 = 12;
    double num2 = 5;

    cout << "Numbers: " << num1 << " and " << num2 << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;

    //Example 2
    double num = 7.6;

    cout << "Number: " << num << endl;
    cout << "Square root: " << sqrt(num) << endl;
    cout << "Square: " << pow(num, 2) << endl;
    cout << "Rounded: " << round(num) << endl;

    //Example 3
    double num1 = 10;
    double num2 = 3;

    cout << "Numbers: " << num1 << " and " << num2 << endl;
    cout << "Larger: " << fmax(num1, num2) << endl;
    cout << "Smaller: " << fmin(num1, num2) << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "Ceiling of quotient: " << ceil(num1 / num2) << endl;
    cout << "Floor of quotient: " << floor(num1 / num2) << endl;
    return 0;
}