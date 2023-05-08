#include <iostream>
#include <string>

using namespace std;

#define DEBUG(s) cout << "DEBUG: " << s << endl
#define DEBUGVAR(n, s) cout << "DEBUG " << n << ": " << s << endl;
#define big_int long long int;

using large_int = long long int;

namespace myNamespace {
    int num1;
    int num2;
    struct myStu {
        double gpa;
    };
}

const float epsilon = 1e-5;
const float pi = 3.1415926;

// using namespace myNamespace;


namespace secondNamespace {
    int num1;
    int num2;
    struct myStu {
        string fName;
    };
}

void addNums();

int main(int argc, char *argv[]) {
    int n = 1000;

    for(int i = 0; i < n; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // O(1)
            if (nums[j] < nums[j+1])
                //swap
                swapped = true;
                continue;
        }
        //O(1)
        if(swapped)
            break;
    }

    // O(n) * O(log n) * O(1) == O(nlogn)


    // O(n) * O(n) * O(1) == O(n^2)

    // // O(n)
    // for (int i = 0; i < n; i++) {
    //     // O(n)
    //     for (int j = 0; j < n; j++) {
    //         for(int k = 0; k < n; k++) {
    //             continue;
    //         }
    //         continue;
    //     }
    //     continue;
    // }

    // O(n^3)

    // O(n*n) == O(n^2)




    // DEBUG("Hello");
    // myNamespace::num1 = 42;
    // myNamespace::num2 = 23;
    
    // DEBUGVAR("myNamespace::num1", myNamespace::num1);
    // // cout << "DEBUG: " << myNamespace::num1 << endl;

    // addNums();

    // secondNamespace::num1 = 9000;
    // secondNamespace::num2 = -50;

    // myNamespace::myStu structOne;
    // secondNamespace::myStu struct1;
    // struct1.fName = "Jeremy";
    // structOne.gpa = 42;
    

    // cout << "&myNamespace::num1: " << &num1 << endl;
    // cout << "&secondNamespace::num1: " << &secondNamespace::num1 << endl;

    // cout << "&myNamespace::num2: " << &num2 << endl;
    // cout << "&secondNamespace::num2: " << &secondNamespace::num2 << endl;

    return 0;
}

void addNums() {
    cout << myNamespace::num1 << " + " << myNamespace::num2 << " = " << myNamespace::num1 + myNamespace::num2 << endl;
}