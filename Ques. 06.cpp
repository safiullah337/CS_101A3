/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate even or odd
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool isNumberOdd(int number) {
    return number % 2 != 0;
}

int main() {
    int userInput;
    cout << "Please enter a number: ";
    cin >> userInput;

    if (isNumberOdd(userInput)) {
        cout << "The number " << userInput << " is odd." << endl;
    } else {
        cout << "The number " << userInput << " is even." << endl;
    }

    return 0;
}
