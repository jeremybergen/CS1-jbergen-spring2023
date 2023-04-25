#include "rectangle.h"

namespace rectangle {
    // template <class T1, class T2>
    void getSides(double& side1, double& side2) {
        std::cout << "Please enter the two sides of a rectangle separated by a space: ";
        std::cin >> side1 >> side2;
    }

    // template <class T1, class T2>
    void calcArea(const double& side1, const double& side2, double& area) {
        area = side1 * side2;
    }

    // template <class T1, class T2>
    void calcPerim(const double& side1, const double& side2, double& perimeter) {
        perimeter = (2*side1) + (2*side2);
    }

    // template <class T1, class T2>
    void printVals(const double& side1, const double& side2, const double& area, const double& perim) {
        std::cout << "Your rectangle with sides " << side1 << " and " << side2 << std::endl
                << "has an area of " << area
                << " and a perimeter of " << perim << std::endl;
    }
}