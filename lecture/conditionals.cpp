/*
Name: Jeremy Bergen

Conditionals
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void sayHello();
void playGame();

int main()
{
    int num1;
    // bool answer;

    // num1 = 10;
    // num2 = 11;

    // cout << boolalpha << !(num1 < num2) << endl;
    // cout << boolalpha << !(num1 <= num2) << endl;



    // if (num1 < 0) {
    //     num1 = num1 * -1;
    // }
    // if (num1 < 0) {
    //     num1 = abs(num1);
    // }

    // if (num1 == 0) {
    //     cout << "num1 is zero" << endl;
    // }
    // else
    // {
    //     if (num1 < 0)
    //     {
    //         num1 = abs(num1);
    //     }
    //     if (num1 % 2 == 0)
    //     {
    //         cout << "num1 is even" << endl;
    //     }
    //     else
    //     {
    //         cout << "num1 is odd" << endl;
    //     }
    // }


    cout << "1. print nums" << endl;
    cout << "2. read nums" << endl;
    cout << "3. play game" << endl;
    cout << "4. quit" << endl;
    cout << "Please enter a selection: ";
    cin >> num1;
    switch(num1) {
        case 1:
            cout << "We will print some numbers now" << endl;
            break;
        case 2:
            cout << "Let's read more numbers" << endl;
            break;
        case 3: 
            cout << "Shall we play a game?" << endl;
            playGame();
            break;
        case 4:
            cout << "I guess you want to quit" << endl;
            break;
        default:
            cout << "Why do you not follow the menu...rude..." << endl;
    }
    // switch(num1%2) {
    //     case 0:
    //         if (num1 == 0) {
    //             cout << "num1 is zero" << endl;
    //         } else {
    //             cout << "num1 is even" << endl;
    //         }
    //         break;
    //     case 1:
    //         cout << "num1 is odd" << endl;
    //         break;
    //     default:
    //         cout << "How did we get here with numbers" << endl;
    // }

    // if (num1 == 0) {
    //     cout << "num1 is zero" << endl;
    // } else if (num1%2 == 1) {
    //     cout << "num1 is odd" << endl;
    // } else if (num1%2 == 0) {
    //     cout << "num1 is even" << endl;
    // } else {
    //     cout << "We really should never get here because numbers" << endl;
    // }

    //     // answer = !(num1 < num2);
    //     answer = (num1 >= num2);
    //   //if (num1 >= num2)
    //     int numInsideIf;
    //     if (num1 >= num2) {

    //         numInsideIf = 9000;
    //         // cout << "The numbers are NOT equal" << endl;
    //         cout << "num1 is greater than or equal to num2" << endl;
    //         cout << num1 + num2 << endl;
    //         sayHello();
    //     }

    //     cout << "Outside of if" << endl;
    //     cout << numInsideIf << endl;

    return 0;
}

void sayHello()
{
    // int someNumber;
    cout << "Hello from the function" << endl;
}

void playGame() {
    cout << "We are now going to play global thermonuclear war" << endl;
}