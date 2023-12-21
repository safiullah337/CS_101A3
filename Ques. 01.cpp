/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate expretion
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

void fun(int x, int y, int z) {
    const int e = 5;
    const int f = 2;
    const int g = 3;

    int result1 = (e * x * x) + (f * y * y) + (g * z * z);
    cout << "The solution to Q1. = (e*x*x) + (f*y*y) + (g*z*z) is: " << result1 << endl;

    int result2 = abs(result1);
    cout << "The solution to Q2. = |(e*x*x) + (f*y*y) + (g*z*z)| is: " << result2 << endl;

    double result3 = sqrt(x * y * z);
    cout << "The solution to Q3. = √(x*y*z) is: " << result3 << endl;

    double result4 = (result1 - result2 + result1 / y) / (result3 * result3);
    cout << "The solution to Q4. = (result1 - result2 + result1/y) / (result3*result3) is: " << result4 << endl;
}

int main() {
    int a, b, c;
    cout << "Enter the values for a, b, and c: ";
    cin >> a >> b >> c;

    fun(a, b, c);

  return 0;
}