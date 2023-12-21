/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate time in milli second
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

float program(int hours, int min, int sec, int millisec) {
    float Timeinsec = (hours * 3600 + min * 60 + sec + millisec / 1000.00);
    return Timeinsec;
}

int main() {
    int nhour = 5, nmin = 55, nsec = 61, nmillisec = 400;
    float Timeinsec = program(nhour, nmin, nsec, nmillisec);
    float result = Timeinsec * (nhour * 3600 + nmin * 60 + nsec + nmillisec / 1000.00);
    cout << "Time in seconds: " << result << endl;

    return 0;
}

