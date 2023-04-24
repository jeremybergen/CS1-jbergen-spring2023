#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
void getSides(T1&, T2&);

template <class T1, class T2>
void calcArea(const T1&, const T2&, double&);

template <class T1, class T2>
void calcPerim(const T1&, const T2&, double&);

template <class T1, class T2>
void printVals(const T1&, const T2&, const double&, const double&);