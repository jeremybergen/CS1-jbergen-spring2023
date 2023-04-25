#include "triangle.h"
#include <iostream>
#include <cmath>

namespace triangle {
    void getSides(double& s1, double& s2, double& s3) {
        std::cout << "Please enter the three sides of your triangle: ";
        std::cin >> s1 >> s2 >> s3;
    }

    void calcArea(const double& s1, const double& s2, const double& s3, double& area) {
        double perim;
        double sperim;
        calcPerim(s1, s2, s3, perim);

        sperim = perim/2;

        area = sqrt(sperim * (sperim - s1) * (sperim - s2) * (sperim - s3));
    }

    void calcPerim(const double& s1, const double& s2, const double& s3, double& perim) {
        perim = s1 + s2 + s3;
    }

    void printVals(const double& s1, const double& s2, const double& s3, const double& area, const double& perim) {
        std::cout << "Your triangle with sides " << s1 << ", " << s2 << " and " << s3 << std::endl
                << "has an area of " << area
                << " and a perimeter of " << perim << std::endl;
    }
}