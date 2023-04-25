#pragma once
#include <iostream>
using namespace std;

namespace parallelogram {
    void getSides(double&, double&);

    void calcArea(const double&, const double&, double&);

    void calcPerim(const double&, const double&, double&);

    void printVals(const double&, const double&, const double&, const double&);
}