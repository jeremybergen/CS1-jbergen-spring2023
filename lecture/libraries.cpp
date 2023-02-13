/*
Name: Jeremy Bergen

Libraries
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    string fullName;

    cout << "Please enter your full name: ";
    getline(cin, fullName);

    cout << "Welcome, " << fullName << endl;
    printf("Welcome, %s\n", fullName.c_str());
    // float num1, num2;

    // cout << "Please enter 2 numbers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);

    // cout << setw(20) << "Num1" << setw(20) << "Num2" << endl;

    // cout << setfill('-');
    // cout << setw(40) << "-" << endl;
    // cout << setfill(' ') << setprecision(10);
    // cout << left << setw(20) << num1 << setw(20) << num2 << endl;

    // char someChar;

    // cout << "Please enter a number between 0-127: ";
    // cin >> someChar;

    // cout << "You entered: " << char(toupper(someChar)) << endl;
    // M_PI = pi basically...actually

    // float base, power;

    // cout << "Enter the base: ";
    // cin >> base;

    // cout << "Enter the power: ";
    // cin >> power;

    // cout << base << " raised to " << power << " is: " << pow(base, power) << endl;
    // float num1;

    // cout << "Please enter a whole number: ";
    // cin >> num1;

    // cout << "The square root of your number is: " << sqrt(abs(num1)) << endl;
    return 0;
}