/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<class T1>
T1 numberOfNumbers();

template<class T1>
void readNumbers(vector<T1>&, int);

template<class T1>
void printVector(vector<T1>&);

int main(int argc, char *argv[]) {
    int readNums;
    vector<float> myNumbers;

    readNums = numberOfNumbers<int>();

    readNumbers<float>(myNumbers, readNums);

    sort(myNumbers.begin(), myNumbers.end());

    printVector(myNumbers);
    return 0;
}

template<class T1>
void printVector(vector<T1>& myNums) {
    for(auto it = myNums.begin(); it != myNums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

template<class T1>
void readNumbers(vector<T1>& myNums, int readNums) {
    T1 tmpNum;
    for(int i = 0; i < readNums; i++) {
        cout << "Enter something: ";
        cin >> tmpNum;
        myNums.push_back(tmpNum);
    }
}

template<class T1>
T1 numberOfNumbers() {
    T1 readLines;
    cout << "How many things do you want to read in? ";
    cin >> readLines;

    return readLines;
}










    // vector<int> myNums;
    // vector<int> myNums2;

    // myNums.push_back(42);
    // myNums.push_back(15);
    // myNums.push_back(23);
    // myNums.push_back(9000);
    // myNums.push_back(-15);
    // myNums.push_back(89432);
    // myNums.push_back(9000);
    // myNums.push_back(-15);
    // myNums.push_back(89432);
    // myNums.push_back(15);
    // myNums.push_back(23);
    // myNums.push_back(9000);
    // myNums.push_back(-15);
    // myNums.push_back(89432);
    // myNums.push_back(9000);
    // myNums.push_back(-15);
    // myNums.push_back(89432);

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums.capacity(): " << myNums.capacity() << endl;
    // cout << "myNums.empty(): " << myNums.empty() << endl;
    
    // cout << "myNums.at(myNums.size()-1): " << myNums.at(myNums.size()-1) << endl;
    // myNums.pop_back();

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums.erase(myNums.end()-1): " << *(myNums.erase(myNums.end()-1)) << endl; 

    // cout << "myNums.at(myNums.size()-1): " << myNums.at(myNums.size()-1) << endl;
    // cout << "myNums.size(): " << myNums.size() << endl;

    // myNums2 = myNums;

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums2.size(): " << myNums2.size() << endl;

    // myNums.pop_back();

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums2.size(): " << myNums2.size() << endl << endl;

    // for(int i = 0; i < myNums.size(); i++) {
    //     cout << "myNums.at(" << i << "): " << myNums.at(i) << endl;
    // }

    // cout << "DEBUG: myNums.size(): " << myNums.size() << endl;
    // for(auto it = myNums.begin(); it != myNums.end(); it++) {
    //     cout << "*it: " << *it << endl;
    //     if (*it == 9000 || *it == -15) {
    //         myNums.erase(it);
    //         it--;
    //     }
    //     cout << "DEBUG: *it: " << *it << endl;
    // }
    // cout << "DEBUG: myNums.size(): " << myNums.size() << endl;

    // for(int elem: myNums) {
    //     cout << "elem: " << elem << endl;
    // }

    // vector<long> *myStr = new vector<long>;
    // cout << endl << endl << myStr->max_size() << endl;
    // // cout << endl << endl << myStr << endl;

    // delete myStr;
