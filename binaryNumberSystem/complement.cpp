#include<iostream>
using namespace std;

// convert -8 to binary & reverse
#include <iostream>

using namespace std;

int main() {
    int num = -8;

    // Convert to unsigned int to handle two's complement manually
    unsigned int uNum = static_cast<unsigned int>(num);

    // Get binary using an int array
    int binary[32];
    for (int i = 31; i >= 0; --i) {
        binary[i] = uNum % 2;
        uNum /= 2;
    }

    //Print original binary
    cout << "Binary of -8: ";
    for (int i = 0; i < 32; ++i) {
        cout << binary[i];
    }
    cout << endl;

    //Reverse and print binary
    cout << "Reversed Binary: ";
    for (int i = 31; i >= 0; --i) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}