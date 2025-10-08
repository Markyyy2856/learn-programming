#include <iostream>

using namespace std;

int main() {
    int favNum[5] = {1, 2, 3, 4, 5};

    cout << "Your favorite numbers are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << favNum[i] << "\n";
    }
    return 0;
}