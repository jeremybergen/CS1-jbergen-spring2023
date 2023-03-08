/*
Name: Jeremy Bergen

Pointers
*/
#include <iostream>
#include <string>

using namespace std;

// int addNums(int*, int*);
// void swapNums(int*&, int*&);
int* largerNum(int*, int*);

//int main(int argc, char **argv)
int main(int argc, char *argv[]) {
    int n1, n2;
    // int result;
    int *ptr1, *ptr2;
    int *result;

    // n1 = 42;
    // n2 = 15;

    ptr1 = &n1;
    ptr2 = &n2;

    cout << "Please enter two numbers separated by a space: ";
    cin >> *ptr1 >> *ptr2;

    result = largerNum(ptr1, ptr2);

    cout << "The larger of the two numbers is: " << *result << endl;
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "result: " << result << endl;

    // cout << "n1: " << *ptr1 << " n2: " << *ptr2 << endl;
    // swapNums(ptr1, ptr2);
    // cout << "n1: " << *ptr1 << " n2: " << *ptr2 << endl;

    // result = addNums(&n1, ptr2);

    // cout << n1 << " + " << n2 << " = " << result << endl;
    return 0;
}

int* largerNum(int* num1, int* num2) {
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    if (*num1 > *num2) {
        return num1;
    } else {
        return num2;
    }
    return NULL;
}

// void swapNums(int*(& num1), int*& num2) {
//     int *tempNum;
//     tempNum = num1;
//     num1 = num2;
//     num2 = tempNum;
// }

// int addNums(int *num1, int *num2) {
//     return *num1 + *num2;
// }




    // int num1, num2, num3, num4;
    // int *ptr1;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -92;

    // ptr1 = &num1;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // // ptr1++;
    // ptr1 += 3;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1--;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // long num1;
    // long * somePointer1 = nullptr;
    // //long *somePointer1 = NULL;

    // num1 = 42;
    // // somePointer1 = &num1;
    // if (somePointer1 == NULL) {
    //     somePointer1 = &num1;
    // }

    // // cout << "num1: " << &num1 << endl;
    // cout << "*somePointer1: " << *somePointer1 << endl;


















    // int num1, num2, num3, num4;
    // int *ptr1;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -5;

    // ptr1 = &num1;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1 = ptr1 + 1;

    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1 = ptr1 + 1;

    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1 = ptr1 + 1;

    // cout << "*ptr1: " << *ptr1 << endl;

    // int num1 = 0;
    // float fnum1;
    // string snum1;
    // char cnum1;

    // int *ptr1 = nullptr;
    // ptr1 = NULL;

    // if (ptr1 != NULL) {
    //     ptr1 = &num1;
    // }
    // // ptr1 = &num1;
    // // cout << "&num1: " << &num1 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;

    // int num1, num2, num3;
    // int *ptr1, *ptr2, *ptr3;

    // num1 = 42;
    // ptr1 = &num1;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // // num1 = 15;
    // *ptr1 = 15;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "&num3: " << &num3 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // cout << "&ptr2: " << &ptr2 << endl;
    // cout << "&ptr3: " << &ptr3 << endl;

