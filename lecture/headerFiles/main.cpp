/*
Name: Jeremy Bergen

Header Files
*/
#include <iostream>
#include <string>

using namespace std;

#include "src/myfunctions.h"

int main(int argc, char *argv[]) {
    int n1, n2;

    cout << "Enter 2 numbers separated by a space: ";
    cin >> n1 >> n2;

    

    cout << n1 << " + " << n2 << " = " << addNums(n1, n2) << endl;
    return 0;
}
