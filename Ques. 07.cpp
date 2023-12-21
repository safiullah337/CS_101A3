/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate perfect no 
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    cout << "The perfect numbers between 1 and 1000 are: " << endl;
    for (int i = 1; i <= 1000; i++) {
        if (isPerfectNumber(i)) {
            cout << i << " = 1";
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    cout << " + " << j;
                }
            }
            cout << endl;
        }
    }
return 0;
}