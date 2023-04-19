/*
Name: Jeremy Bergen

Student Records
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Student {
    string fName;
    string lName;
    float gpa;
    string favClass;
};

void readData(ifstream&, Student*, int&);

int main(int argc, char *argv[]) {
    int lineNumber = 0;
    Student *students = new Student[10];
    ifstream fin("files/student.csv");

    readData(fin, students, lineNumber);

    fin.close();
    delete[] students;
    return 0;
}

void readData(ifstream& fin, Student* students, int& lineNumber) {
    string currentLine;
    while(getline(fin, currentLine)) {
        cout << "DEBUG: currentLine: " << currentLine << endl;
        int commaIdx = 0;
        for(int i = 0; i < currentLine.size(); i++) {
            commaIdx = currentLine.find(',', i);
            
        }
    }
}