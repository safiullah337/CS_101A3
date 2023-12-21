/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate temp
////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Fahrenheit to Celsius
double convertToFahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}

// Function to convert Celsius to Fahrenheit
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    // Print the table headers
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << setw(10) << "|" << setw(15) << "Fahrenheit" << setw(10) << "Celsius" << endl;
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    // Print the Celsius to Fahrenheit conversion table
    for (int celsius = -100; celsius <= 100; celsius++) {
        double fahrenheit = convertToFahrenheit(celsius);
        cout << setw(10) << fixed << setprecision(2) << celsius << setw(15) << fixed << setprecision(2) << fahrenheit << setw(10) << "|" << setw(15) << fixed << setprecision(2) << celsius << setw(10) << fixed << setprecision(2) << convertToCelsius(fahrenheit) << endl;
    }

    // Print the Fahrenheit to Celsius conversion table
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    for (int fahrenheit = 0; fahrenheit <= 200; fahrenheit++) {
        double celsius = convertToCelsius(fahrenheit);
        cout << setw(10) << fixed << setprecision(2) << celsius << setw(15) << fixed << setprecision(2) << fahrenheit << setw(10) << "|" << setw(15) << fixed << setprecision(2) << convertToFahrenheit(celsius) << setw(10) << fixed << setprecision(2) << fahrenheit << endl;
    }

    return 0;
}
