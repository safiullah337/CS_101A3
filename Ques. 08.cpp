/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate random
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int x = rand() % 2 + 2;
    int y = rand() % 10 + 1;
    int z = rand() % 100;
    int w = rand() % 125 + 100;
    int p = rand() % 1 - 1;
    int q = rand() % 15 - 5;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << w << endl;
    cout << p << endl;
    cout << q << endl;

    return 0;
}
