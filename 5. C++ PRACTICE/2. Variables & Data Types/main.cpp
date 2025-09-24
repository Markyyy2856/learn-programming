#include <iostream>

using namespace std;

int main() {

    string name = "John";
    int age = 20;

    cout << "There was a man named " << name << endl;
    cout << "He was " << age << " years old" << endl;

    //Changing the name
    name = "Bob";

    //Trying to manually add namespace std
    std::cout << "He like the name " << name << std::endl;
    std::cout << "But he doesn't like being " << age << std::endl;
    return 0;
}