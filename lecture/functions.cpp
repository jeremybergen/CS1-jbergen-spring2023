/*
Name: Jeremy Bergen

Function and more functions
*/
#include <iostream>
#include <string>

using namespace std;


// int addNums(int num1, int num2) {
//     return num1 + num2;
// }

// int addNums(float num1, float num2) {
//     return num1 + num2 + 10;
// }

// int addNums(float num1, int num2) {
//     return num1 + num2;
// }

// template <class T1>
// T1 addNums(T1 num1, T1 num2) {
//     T1 answer;
//     answer = num1 + num2;
//     return answer;
// }

void sayGoodbye();
void sayHello();

template <class T1, class T2>
T1 addNums(T1, T2);

int main() {

    // sayHello();
    float n1;
    int n2;

    n1 = 42.5;
    n2 = 15.2;

    cout << n1 << " + " << n2 << " = " << addNums<float, int>(n1, n2) << endl;
    cout << n1 << " + " << n2 << " = " << addNums<int, float>(n2, n1) << endl;

    return 0;
}

template <class T1, class T2>
T1 addNums(T1 num1, T2 num2) {
    return num1 + num2;
}

void sayGoodbye() {
    cout << "Goodbye everyone" << endl;
    sayHello();
}

void sayHello() {
    cout << "Hello World" << endl;
    sayGoodbye();
}


// void sayHello() {
//     cout << "Hello from sayHello new text" << endl;
// }

// float addNums(int num1, int num2) {
//     float result;
//     result = num1 + num2 + 5.5;
//     return result;
// }

// void greetUser(string firstname) {
//     cout << "Welcome " << firstname << " to my program." << endl;
// }

// string promptName() {
//     string firstname;

//     cout << "Please enter your first name: ";
//     cin >> firstname;

//     return firstname;
// }

// int printNum(int num1) {
//     int num2;
//     cout << "inside printNum num1: " << &num1 << endl;
//     cout << "inside printNum num2: " << &num2 << endl;
//     return num2;
// }





    // int num1;
    // int num2;
    // num1 = 42;
    // cout << "inside main num1: " << &num1 << endl;
    // cout << "inside main num2: " << &num2 << endl;
    // printNum(num1);
    // string playerName;
    // playerName = promptName();
    // greetUser(playerName);
    // greetUser("Bob");
    // greetUser("Phil");

    // int num1, bob;
    // float addNumsAnswer;

    // cout << "Please enter two numbers separated by a space: ";
    // cin >> num1 >> bob;

    // // DOES NOT WORK!!! cout << "The result of sayHello is: " << sayHello() << endl;
    // addNumsAnswer = addNums(num1, bob);
    // cout << "The numbers added together are: " << addNumsAnswer << endl;
    // sayHello();
    // sayHello();
    // sayHello();