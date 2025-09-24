#include <iostream>

int main() {

    std::cout << "Hello" << std::endl;
    std::cout << "World\n";
    std::cout << "Let's code!" << std::endl;

    //length() Function
    std::string myName = "Mark Angelo";

    std::cout << myName.length(); //Counts every character inside string

    std::cout << "\n";

    //Indexing
    std::cout << myName[3]; //Accessing specific letter using indexing

    std::cout << "\n";

    myName[0] = 'B'; //Modifying a specific character
    std::cout << myName;

    std::cout << "\n";

    //find() Function - Passing parameters/arguments
    std::string fruit = "Green Apple";

    std::cout << fruit.find("en", 0);

    std::cout << "\n";

    //substr() function - taking a part
    std::cout << fruit.substr(4, 3);

    return 0;
}

