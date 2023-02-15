/*
Name: Jeremy Bergen

Functions pass-by-reference/pass-by-value
*/
#include <iostream>

using namespace std;

void promptSides(int&);

int main() {
    int s1, s2;

    cout << "The memory address inside of main for s1 is: " << &s1 << endl;
    promptSides(s1);

    cout << "The memory address inside of main for s2 is: " << &s2 << endl;
    promptSides(s2);

    // cout << "You entered: " << s1 << " " << s2 << endl;

    return 0;
}

void promptSides(int &side1) {
    cout << "The memory address inside promptSides is: " << &side1 << endl;
    
    // cout << "Please enter a side of a rectangle: ";
    // cin >> side1;

    // return side1;
}