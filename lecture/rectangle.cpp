/*
Name: Jeremy Bergen

Rectangle Calculator

step 1: prompt for name
step 2: greet name
step 3: prompt for sides
step 4: calc area
step 5: calc perim
step 6: print area and perim
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

string promptName();
void greetPerson(string);

template <class T1, class T2>
void promptSides(T1&, T2&);

template <class T1, class T2, class T3>
void calcArea(T1&, T2&, T3&);

template <class T1, class T2, class T3>
void calcPerim(T1&, T2&, T3&);

template <class T1, class T2, class T3, class T4>
void printVals(T1&, T2&, T3&, T4&);

int main() {
    string name;
    float side1, side2;
    float rectangleArea;
    float rectanglePerim;
    //prompt name
    name = promptName();
    //greet name
    greetPerson(name);

    //prompt for sides
    promptSides<float, float>(side1, side2);
    // side1 = promptSides();
    // side2 = promptSides();
    // cout << "DEBUG: side1: " << side1 << endl;
    // cout << "DEBUG: side2: " << side2 << endl;

    //calc area
    calcArea<float, float, float>(side1, side2, rectangleArea);

    //calc perim
    calcPerim<float, float, float>(side1, side2, rectanglePerim);

    // cout << "DEBUG: Area: " << rectangleArea << endl;
    // cout << "DEBUG: Perimeter: " << rectanglePerim << endl;

    //print values
    printVals<float, float, float, float>(rectangleArea, rectanglePerim, side1, side2);

    return 0;
}

void greetPerson(string playerName) {
    cout << "Welcome " << playerName << " to my rectangle calculator" << endl;
}

string promptName() {
    string personName;
    
    cout << "Please enter your name: ";
    getline(cin, personName);

    return personName;
}

template <class T1, class T2>
void promptSides(T1 &side1, T2 &side2) {
    // int rectangleSide;
    cout << "Please enter the sides of the rectangle separated by a space: ";
    cin >> side1 >> side2;
    // return rectangleSide;
}

template <class T1, class T2, class T3>
void calcArea(T1 &s1, T2 &s2, T3 &area) {
    // cout << "Inside int calcArea" << endl;
    // int area;
    area = s1 * s2;
    // return area;
}

template <class T1, class T2, class T3>
void calcPerim(T1 &s1, T2 &s2, T3 &perimeter) {
    // int perimeter;
    perimeter = (2 * s1) + (2 * s2);
    // return perimeter;
}

template <class T1, class T2, class T3, class T4>
void printVals(T1 &area, T2 &perim, T3 &s1, T4 &s2) {
    // printf("The rectangle with sides %d and %d\nhas an area of %d and a perimeter of %d\n", s1, s2, area, perim);
    
    cout << "The rectangle with sides " << s1 << " and " << s2 << endl;
    cout << "has an area of " << area << " and a perimeter of " << perim << endl;
    
}