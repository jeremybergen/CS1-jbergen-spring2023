/*
Name: Jeremy Bergen

Conditionals
*/
#include <iostream>
#include <string>

using namespace std;

void sayHello();

int main() {
    int num1, num2;
    bool answer;

    // num1 = 10;
    // num2 = 11;

    // cout << boolalpha << !(num1 < num2) << endl;
    // cout << boolalpha << !(num1 <= num2) << endl;

    cout << "Please enter 2 numbers separated by a space: ";
    cin >> num1 >> num2;

    // answer = !(num1 < num2);
    answer = (num1 >= num2);
  //if (num1 >= num2)
    int numInsideIf;
    if (answer) {
        
        numInsideIf = 9000;
        // cout << "The numbers are NOT equal" << endl;
        cout << "num1 is greater than or equal to num2" << endl;
        cout << num1 + num2 << endl;
        sayHello();
    }

    cout << "Outside of if" << endl;
    cout << numInsideIf << endl;

    return 0;
}

void sayHello() {
    int someNumber;
    cout << "Hello from the function" << endl;
}