/*
Name: Jeremy Bergen

Functions pass-by-reference/pass-by-value
*/
#include <iostream>

using namespace std;

template <class T1, class T2>
void promptSides(T1&, T2&);

int main() {
    float s1, s2;

    // cout << "The memory address inside of main for s1 is: " << &s1 << endl;
    promptSides<float, float>(s1, s2);

    // cout << "The memory address inside of main for s2 is: " << &s2 << endl;
    // promptSides(s2);

    cout << "You entered: " << s1 << " " << s2 << endl;

    return 0;
}

template <class T1, class T2>
void promptSides(T1 &side1, T2 &side2) {
    // cout << "The memory address inside promptSides is: " << &side1 << endl;
    
    cout << "Please enter the sides of a rectangle: ";
    cin >> side1 >> side2;

    // return side1;
}