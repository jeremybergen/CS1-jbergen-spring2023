#include <iostream>
#include <cassert>

using namespace std;

template <class T1, class T2>
T1 addNums(T1, T2);

void tests();

//int main(int argc, char **argv) {
int main(int argc, char *argv[]) {
    // cout << "argc: " << argc << endl;
    // for (int i = 0; i < argc; i++) {
    //     cout << "argv[" << i << "]: " << argv[i] << endl;
    // }
    int num1, num2;
    int answer;

    if (argc >= 2 && (string)argv[1] == "test"){
        tests();
        return 0;
    }

    num1 = 42;
    num2 = 15;

    answer = addNums<int, int>(num1, num2);
    cout << "Your answer is " << answer << endl;
    
    return 0;
}

void tests() {
    int result;
    result = addNums<int, int>(42, 15);
    assert(result == 57);

    result = addNums<int, int>(9000, 1);
    assert(result == 9001);
    cout << "All test cases passed" << endl;
}

template <class T1, class T2>
T1 addNums(T1 num1, T2 num2) {
    return num1 + num2;
}