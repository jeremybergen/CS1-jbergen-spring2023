/*
Name: Jeremy Bergen

Classes
*/
#include <iostream>

// #define PI 3.14159
#define DEBUG(s) cout << "DEBUG: " << s << endl;

using namespace std;

typedef long long big_int;

using large_int = long long;

// struct Student {
//     string fName, lName;
//     float gpa;
// };

class Student {
    public:
    Student(string fname = "Jeremy", string lname = "Bergen", float grade = 1.0) {
        if (fname == "") {
            fName = "Jeremy";
        }else {
            fName = fname;
        }

        lName = lname;
        gpa = grade;
    }
    // string getFName() {
    //     return fName;
    // }

    // void setFName(string word) {
    //     for(auto it=word.begin(); it!=word.end(); it++) {
    //         tolower(*it);
    //     }
    //     word[0] = toupper(word[0]);
    //     fName = word;
    // }

    float getGpa() {
        return gpa;
    }

    void setGpa(float val) {
        gpa = val;
    }

    string getLName() {
        return lName;
    }

    string getFName() {
        return fName;
    }

    private:
    float gpa;
    string fName;
    string lName;
};

int main(int argc, char *argv[]) {
    size_t tempnum;
    unsigned long tempnum2;

    big_int myNum;
    long long myNum2;

    myNum2 = 42;
    myNum = (big_int)myNum2;

    large_int myNum3;
    long long myNum4;

    DEBUG("Hello");

    Student stu1("", "Builder");

    DEBUG(stu1.getFName());

    cout << "Hello " << stu1.getFName() << " " << stu1.getLName() << ", you have a gpa of: " << stu1.getGpa() << endl;

    // stu1.fName = "Jeremy";
    // stu1.lName = "Bergen";
    // stu1.setGpa(3.9);

    // cout << "Hello " << stu1.fName << " " << stu1.lName << ", you have a gpa of: " << stu1.getGpa() << endl;

    // Student stu1 = {"Jeremy", "Bergen", 4.0};

    // cout << "Hello " << stu1.fName << " " << stu1.lName << ", you have a gpa of " << stu1.gpa << endl;
    return 0;
}