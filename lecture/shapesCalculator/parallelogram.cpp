#include "parallelogram.h"
#include <iostream>

namespace parallelogram {
    void getSides(double& base, double& height) {
        std::cout << "Please enter the base and height of your parallelogram: ";
        std::cin >> base >> height;
    }

    void calcArea(const double& base, const double& height, double& area) {
        area = base * height;
    }

    void calcPerim(const double& base, const double& height, double& perim) {

    }

    void printVals(const double& base, const double& height, const double& area, const double& perim) {
        std::cout << "Your parallelogram with base " << base << " and height " << height << std::endl
                  << "has an area of " << area << std::endl;
    }
}