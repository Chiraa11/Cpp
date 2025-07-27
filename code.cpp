
#include <iostream>
using namespace std;

int main() {
    int marks[5];
    cout << "Hello, World!" << endl;
     cout << "Enter marks for 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display the marks
    cout << "\nMarks entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }
    cout<<"Hiii I am Chirashree Mahato";


    return 0;
}

