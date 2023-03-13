/*
Name: Jeremy Bergen

Arrays!!!
*/
#include <iostream>
#include <string>

using namespace std;

void getArraySize(size_t&);
void populateArray(char[], size_t);

int main(int argc, char *argv[]) {
    size_t arrSize = 10;
    getArraySize(arrSize);
    char nums[arrSize];

    // int* ptr1;
    

    cout << "The size of nums is: " << sizeof(nums) << endl;

    populateArray(nums, arrSize);


    // int counter = 0;
    // while (counter < arrSize) {
    //     cout << "Please enter a number: ";
    //     cin >> nums[counter];
    //     counter++;
    // }



    for (int i = 0; i < arrSize; i++) {
        cout << "nums[" << i << "]: " << nums[i] << endl;
    }

    // cout << "The size of nums is: " << sizeof(nums) << endl;

    // cout << "The address for nums is: " << nums << endl;
    // cout << "The address for nums[0] is: " << &nums[0] << endl;

    // for (int i = 0; i < arrSize; i++) {
    //     cout << "The address for nums[" << i << "] is: " << &nums[i] << endl;
    // }

    // ptr1 = &nums[9];

    // for (int i = 0; i < 10; i++) {
    //     cout << "The address stored in ptr1 is: " << ptr1 << endl;
    //     ptr1--;
    // }
    // cout << "The address for nums[0] is: " << &nums[0] << endl;
    // cout << "The address for nums[1] is: " << &nums[1] << endl;
    // cout << "The address for nums[2] is: " << &nums[2] << endl;
    // cout << "The address for nums[3] is: " << &nums[3] << endl;
    // cout << "The address for nums[4] is: " << &nums[4] << endl;
    
    // for (int i = 0; i < arrSize; i++) {
    //     nums[i] = -1;
    // }

    // nums[0] = 42;
    // nums[1] = 15;
    // nums[2] = 23;
    // nums[3] = 9000;
    // nums[4] = -50;
    // nums[5] = 32;
    // nums[6] = -213;
    // DON'T DO!!!!
    // nums[5] = 123;

    // for(int i=0; i < arrSize; i++) {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }
    // cout << "nums[0]: " << nums[0] << endl;
    // cout << "nums[1]: " << nums[1] << endl;
    // cout << "nums[2]: " << nums[2] << endl;
    // cout << "nums[3]: " << nums[3] << endl;
    // cout << "nums[4]: " << nums[4] << endl;
    // DON'T DO!!!!
    // cout << "nums[5]: " << nums[5] << endl;

    // int num1, num2;
    // long num3, num4;
    // float num5, num6;
    // int num7, num8;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;

    // cout << "&num5: " << &num5 << endl;
    // cout << "&num6: " << &num6 << endl;
    // cout << "&num7: " << &num7 << endl;
    // cout << "&num8: " << &num8 << endl;

    // cout << "&num3: " << &num3 << endl;
    // cout << "&num4: " << &num4 << endl;

    return 0;
}

void getArraySize(size_t& arrSize) {
    cout << "Please enter how many elements you want in your array: ";
    cin >> arrSize;
}

void populateArray(char characters[], size_t arrSize) {
    for(int i = 0; i < arrSize; i++) {
        cout << "Please enter a character: ";
        cin >> characters[i];
    }
}