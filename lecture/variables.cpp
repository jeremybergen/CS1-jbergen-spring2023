/*
Name: Jeremy Bergen

All about the variables
*/
#include <iostream>

using namespace std;

int main() {
    int inputSeconds;
    int numHours, numMins, numSeconds;

    cout << "How many seconds are there: ";
    cin >> inputSeconds;

    numHours = inputSeconds/3600;
    numMins = (inputSeconds/60)%60;
    numSeconds = inputSeconds%60;

    cout << "From " << inputSeconds << " you have " << numHours << ":" << numMins << ":" << numSeconds << endl;

    // int num1, num2;
    // // float fNum1, fNum2;

    // cout << "Please enter number1: ";
    // cin >> num1;
    // // fNum1 = float(num1);
    // // num1 = int(fNum1);

    // cout << "Please enter number2: ";
    // cin >> num2;
    // // fNum2 = float(num2);

    // cout << num1 << "%" << num2 << " = " << num1%num2 << endl;

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    // cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    // cout << num1 << " / " << num2 << " = " << float(num1) / float(num2) << endl;
    // cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;


    // string line3;
    // char ch;

    // cout << "Please enter your first name: ";
    // cin >> line3;

    // // line3 = "( > 0 < )     *      Author: <Yo\rur Name>    *  ( \" )_( \" )\n";
    // // cout << line3 << endl;
    // cout << "Press any character and enter to quit: ";
    // // cin >> ch;
    // // cin.ignore();
    // cin.get();
    // cin.get();
    // line3 = "( > 0 < )     *      Author: <Yo-\tur Name>    *  ( \" )_( \" )";
    // cout << line3 << endl;
    // line3 = "( > 0 < )     *      Author: <Yo--\tur Name>    *  ( \" )_( \" )";
    // cout << line3 << endl;
    // line3 = "( > 0 < )     *      Author: <Yo---\tur Name>    *  ( \" )_( \" )";
    // cout << line3 << endl;
    // line3 = "( > 0 < )     *      Author: <Yo----\tur Name>    *  ( \" )_( \" )";
    // cout << line3 << endl;
    // string firstName;
    // string lastName;
    // string fullName;

    // // cout << "Please enter your name separated by a space: ";
    // // cin >> firstName >> lastName;

    // cout << "Please enter your first name: ";
    // getline(cin, firstName);
    // // cin >> firstName;


    // cout << "Please enter your last name: ";
    // getline(cin, lastName);
    // // cin >> lastName;

    // fullName = firstName + " " + lastName;
    // // cout << fullName << endl;
    // // cout << "Welcome " + fullName << endl;
    // cout << "Welcome " << fullName << endl;
    // cout << "Welcome " << firstName + " " + lastName << endl;

    // string num1;
    // string num2;
    // int total;

    // cout << "Please enter a whole number: ";
    // cin >> num1;

    // cout << "The value of num1 is: " << num1 << endl;

    // cout << "Please enter another number: ";
    // cin >> num2;

    // cout << "The value of num2 is: " << num2 << endl;

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