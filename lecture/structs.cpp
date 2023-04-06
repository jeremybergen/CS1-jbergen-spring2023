/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

struct Rectangle {
    float side1 = 0;
    int side2 = 0;
    float area = 0;
    float perimeter = 0;
};

void getSides(Rectangle&);
void calcArea(Rectangle&);
void calcPerimeter(Rectangle&);
void printValues(Rectangle&);

int main(int argc, char *argv[]) {
    // Rectangle rectangles[5];
    vector<Rectangle> rectangles;

    for(int i = 0; i < 5; i++) {
        Rectangle rect1;
        getSides(rect1);
        calcArea(rect1);
        calcPerimeter(rect1);
        rectangles.push_back(rect1);
        // getSides(rectangles.at(i));
        // calcArea(rectangles.at(i));
        // calcPerimeter(rectangles.at(i));
    }

    cout << endl << endl << "Our calculated rectangles are: " << endl;
    for(int i = 0; i < 5; i++) {
        printValues(rectangles.at(i));
    }
    // Rectangle rect1;
    // Rectangle rect2;

    // getSides(rect1);
    // calcArea(rect1);
    // calcPerimeter(rect1);
    // printValues(rect1);

    // getSides(rect2);
    // calcArea(rect2);
    // calcPerimeter(rect2);
    // printValues(rect2);

    return 0;
}

void getSides(Rectangle& rect) {
    cout << "Please enter side1: ";
    cin >> rect.side1;

    cout << "Please enter side2: ";
    cin >> rect.side2;
}

void calcArea(Rectangle& rect) {
    rect.area = rect.side1 * rect.side2;
}

void calcPerimeter(Rectangle& rect) {
    rect.perimeter = (2 * rect.side1) + (2 * rect.side2);
}

void printValues(Rectangle& rect) {
    cout << "Your rectangle with sides " << rect.side1 << " and " << rect.side2
         << " has an area of " << rect.area
         << " and a perimeter of " << rect.perimeter << endl;
}



// struct Point {
//     int x, y;
//     float distance;
// };
    // Point point1;
    // Point point2;

    // cout << "sizeof(point1): " << sizeof(point1) << endl;
    // cout << "sizeof(point2): " << sizeof(point2) << endl;
    // cout << "&point1: " << &point1 << endl;
    // cout << "&point1.x: " << &point1.x << endl;
    // cout << "&point1.y: " << &point1.y << endl;
    // cout << "&point1.z: " << &point1.z << endl;
    // cout << "&point1.a: " << &point1.a << endl;

    // cout << "&point2: " << &point2 << endl;
    // cout << "&point2.x: " << &point2.x << endl;
    // cout << "&point2.y: " << &point2.y << endl;
    // cout << "&point2.z: " << &point2.z << endl;
    // cout << "&point2.a: " << &point2.a << endl;
    // Point point2;
    // double distance;

    // point1.x = 0;
    // point1.y = 0;

    // point2.x = 1;
    // point2.y = 1;

    // printf("(%d, %d) and (%d, %d)\n", point1.x, point1.y, point2.x, point2.y);

    // distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));

    // printf("The distance between the two points is: %.2f\n", distance);