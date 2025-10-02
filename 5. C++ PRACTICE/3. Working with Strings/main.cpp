#include <iostream>

using namespace std;

int main() {

    cout << "Hello" << endl;
    cout << "World\n";
    cout << "Let's code!" << endl;

    //length() Function
    string myName = "Mark Angelo";

    cout << myName.length(); //Counts every character inside string

    cout << "\n";

    //Indexing
    cout << myName[3]; //Accessing specific letter using indexing

    cout << "\n";

    myName[0] = 'B'; //Modifying a specific character
    cout << myName;

    cout << "\n";

    //find() Function - Passing parameters/arguments
    string fruit = "Green Apple";

    cout << fruit.find("n Ap", 0); //Give a string/character to find, then index where to start looking

    cout << "\n";

    //substr() function - taking a part
    cout << fruit.substr(4, 3); //starting index and end, outputs the characters inside


    //Example 1
    string fname = "Mark";
    string lname = "Reyes";
    string fullName = fname + " " + lname; //Concatenates first and last name

    cout << "Full Name: " << fullName;

    //Example 2
    string fullName = "Mark Reyes";

    cout << "Length: " << fullName.length() << endl;
    cout << "First Character: " << fullName[0] << endl;
    cout << "Last Character: " << fullName[fullName.length() - 1] << endl;

    //Example 3
    string phrase = "C++ is fun!";

    cout << "Original: " << phrase << endl;

    cout << "Reversed: ";
    for (int i = phrase.length() - 1; i >= 0; i--)
    {
        cout << phrase[i];
    }
    return 0;
}

