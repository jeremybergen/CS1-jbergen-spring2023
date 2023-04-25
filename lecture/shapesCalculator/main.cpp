/*
Name: Jeremy Bergen

Shape Calculator
*/
#include <iostream>
#include "greetPerson.h"
#include "rectangle.h"
#include "triangle.h"
#include "parallelogram.h"

using namespace std;
// using namespace triangle;
// using namespace rectangle;
// using namespace parallelogram;

int main(int argc, char *argv[]) {
    string name;
    double side1, side2, side3, area, perimeter;
    string shape;

    getName(name);
    greetName(name);

    cout << "What shape do you want? ";
    cin >> shape;

    if(shape == "rectangle") {
        rectangle::getSides(side1, side2);
        rectangle::calcArea(side1, side2, area);
        rectangle::calcPerim(side1, side2, perimeter);
        rectangle::printVals(side1, side2, area, perimeter);
    } else if (shape == "triangle") {
        triangle::getSides(side1, side2, side3);
        triangle::calcArea(side1, side2, side3, area);
        triangle::calcPerim(side1, side2, side3, perimeter);
        triangle::printVals(side1, side2, side3, area, perimeter);
    } else if (shape == "para") {
        parallelogram::getSides(side1, side2);
        parallelogram::calcArea(side1, side2, area);
        parallelogram::printVals(side1, side2, area, 0);
    }


    
    return 0;
}