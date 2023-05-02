/*
Name: Jeremy Bergen

Memory types
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct myStruct {
    int num1;
    int myNums[10];
    vector<int> numbers2;
    myStruct *next;
};

int main(int argc, char *argv[]) {
    myStruct struct1;

    myStruct *struct2 = new myStruct;

    struct2->numbers2.push_back(42);
    struct1.numbers2.push_back(42);
    struct1.next = struct2;
    struct2->next = &struct1;

    delete struct2;
    // int *myPtr;
    // // int myNumber;

    // myPtr = new int;

    // delete myPtr;

    // int *myNumbers = new int[10000*10000];

    // int *myNumbers2;
    // myNumbers2 = new int[10000*10000];

    // delete[] myNumbers;
    // delete[] myNumbers2;
    // int myNumbers[10000][10000];

    // int myimage[1000][1000][4];
    // int myNum;
    // string myName;
    // int *myPtr;

    return 0;
}