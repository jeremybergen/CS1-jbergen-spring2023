/*
Name: Jeremy Bergen

We go round and round....or loops
*/
#include <iostream>

using namespace std;

int main() {
    char inputChar = 'y';

    do {
        cout << "Please enter y to quit: ";
        cin >> inputChar;
    } while(inputChar != 'y');
    // while(!(inputChar == 'y')) {
    //     cout << "Please enter y to quit: ";
    //     cin >> inputChar;
    // }
    // int counter = 0;
    // while(counter != 50) {
    //     cout << counter << ": Hello World" << endl;
    //     counter++;
    // }

    // // for( ; ; ) {
    // for (int i = 0; i < 10; i++) {
    //     cout << i << ": Hello World" << endl;
    // }

    // these are all the same:
    // i++;
    // i = i + 1;
    // i += 1;
    // ++i;

    // for (int i = 10; i > 0; i--) {
    // int i = 0;
    // int j = 10;
    // for (int i = 0, j = 5 ; i < 10 || j > 0; i++, j--) {
    //     cout << i << ": Hello World!" << endl;
    //     cout << j << ": Goodbye World!" << endl;
    //     // cout << "j: " << j << endl;
    //     // cout << "i: " << i << endl;
    // }
    // for (int i = 0; i < 10; i++) {
    //     int k = 50;
    //     for (int j = 10; j > 0; j--) {
    //         int m = 100;
    //         cout << "i: " << i << " j: " << j << " k: " << k << " m: " << m << endl;
    //         k++;
    //         m++;
    //     }
    // }

    // for (int i = 0; i < 10; i++) {
    //     if (i == 5) {
    //         continue;
    //     }
    //     cout << "i: " << i << endl;
    // }

    // cout << "after for loop " << i << endl;

    return 0;
}