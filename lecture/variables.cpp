/*
Name: Jeremy Bergen

All about the variables
*/
#include <iostream>

using namespace std;

int main() {
    string num1;
    string num2;
    int total;

    cout << "Please enter a whole number: ";
    cin >> num1;

    cout << "The value of num1 is: " << num1 << endl;

    cout << "Please enter another number: ";
    cin >> num2;

    cout << "The value of num2 is: " << num2 << endl;

    // WRONG WAY!!! num1 + num2 = total;
    // total = num1 + num2;

    // cout << "The numbers added together is: " << total << endl;

    // float number1;

    // number1 = 42.51;

    // cout << "The memory address of number1 is: " << &number1 << endl;
    // cout << "The value of number1 is: " << number1 << endl;

    // number1 = 23.123;

    // cout << "The memory address of number1 now is: " << &number1 << endl;
    // cout << "The value of number1 now is: " << number1 << endl;

    return 0;
}