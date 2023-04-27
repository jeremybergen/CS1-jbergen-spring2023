/*
Name: Jeremy Bergen

Classes
*/
#include <iostream>

using namespace std;

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
    Student stu1("", "Builder");

    cout << "Hello " << stu1.getFName() << " " << stu1.getLName() << ", you have a gpa of: " << stu1.getGpa() << endl;

    // stu1.fName = "Jeremy";
    // stu1.lName = "Bergen";
    // stu1.setGpa(3.9);

    // cout << "Hello " << stu1.fName << " " << stu1.lName << ", you have a gpa of: " << stu1.getGpa() << endl;

    // Student stu1 = {"Jeremy", "Bergen", 4.0};

    // cout << "Hello " << stu1.fName << " " << stu1.lName << ", you have a gpa of " << stu1.gpa << endl;
    return 0;
}