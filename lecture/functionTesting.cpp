/*
Name: Jeremy Bergen

function testing
*/
#include <iostream>
#include <cassert>

using namespace std;

int addNums(const int&, const int&);
void tests();

int main() {
    tests();
    int n1, n2;
    int answer;
    n1 = 10;
    n2 = 20;

    answer = addNums(n1, n2);
    cout << "Our answer is: " << answer << endl;
    return 0;
}

void tests() {
    double answer = addNums(10, 12);
    double expected = 22;
    assert(answer == expected); // test case 1
    assert(addNums(-5, 10) == 5); // test case 2


    assert(addNums(42, 15) == 57);
    assert(addNums(-9000, 9000) == 0); // test case 2

    // assert(addNums(42, 15) == 62);
    // assert(addNums(10, 20) == 35);
    cout << "All test cases passed" << endl;
}

int addNums(const int &num1, const int &num2) {
    return num1 + num2;
}