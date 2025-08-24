// Input and Output
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // OUTPUT
    // Basic syntax:
    // cout << "Hello World!";  prints Hello World!
    // Note: I will be using endl for each output for easier reading of the output

    int herd_size = 110;
    cout << herd_size << endl; // prints 110

    // Using string literals and integer variables together
    cout << "Sheep counted so far: " << herd_size << endl; // prints Sheep counted so far: 110

    // Using an expression
    int square_side = 12;
    cout << "The square perimeter is: " << 4 * square_side << endl; // prints The square perimeter is: 48

    // Using a manipulator
    int byte = 255;
    cout << "Byte in hex: " << hex << byte << endl;
    cout << hex << byte << endl;         // prints Byte in hex: ff
    cout << byte << dec << byte << endl; // prints ff 255
    cout << setbase(16) << byte << endl; // prints ff

    // Another Example
    char Char = 'X';
    char Minus = '-';
    float Float = 2.5;
    cout << Char << Minus << Float << endl; // prints X-2.5

    // INPUT
    // Basic syntax:
    // cin >> variable_name;  takes input from user and stores it in variable_name
    int value, square;
    cout << "Give me a number and I will square it!\n";
    cin >> value;
    square = value * value;
    cout << "You've given " << value << endl;
    cout << "The squared value is " << square << endl;

    //Using sqrtf (square root float)
    // Make sure to include <cmath> library
    //Test on different compiler
    float value, squareroot;

        cout << "Give me a number and I will find its square root:" << endl;
        cin >> value;
        if(value >= 0.0) {
	        squareroot = sqrtf(value);
	        cout << "You have given: " << value << endl;
	        cout << "The square root is: " << squareroot << endl;
        }

    //LAB Getting input from user


    return 0;
}
