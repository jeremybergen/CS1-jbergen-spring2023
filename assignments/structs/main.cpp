/*
Name: Jeremy Bergen
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

struct Student {
    string fName;
    string lName;
    int t1, t2, t3, t4;
};

struct FieldWidths {
    int fName = 6;
    int lName = 6;
    int t1 = 4;
    int t2 = 4;
    int t3 = 4;
    int t4 = 4;
};

void readFile(vector<Student>&);
void printData(vector<Student>&, FieldWidths&, int);

int main(int argc, char *argv[]) {
    FieldWidths fWidths;
    vector<Student> students;
    readFile(students);

    // for(int i = 0; i < students.size(); i++)
    // for(auto it: students)
    
    printData(students, fWidths, 80);

    
    return 0;
}

void printData(vector<Student>& students, FieldWidths& fWidths, int testVal) {
    for(auto it: students) {
        if(it.t1 >= testVal) {
            if(fWidths.fName < it.fName.length() + 2) {
                fWidths.fName = it.fName.length() + 2;
            }
            if(fWidths.lName < it.lName.length() + 2) {
                fWidths.lName = it.lName.length() + 2;
            }
        }
    }

    cout << left << setw(fWidths.fName) << "fName" << setw(fWidths.lName) << "lName" 
         << setw(fWidths.t1) << "T1" << setw(fWidths.t2) << "T2" << setw(fWidths.t3) << "T3" << setw(fWidths.t4) << "T4" << endl;
    cout << setfill('=');
    cout << setw(fWidths.fName + fWidths.lName + fWidths.t1 + fWidths.t2 + fWidths.t3 + fWidths.t4) << "=" << endl;
    cout << setfill(' ');
    for(auto it = students.begin(); it != students.end(); it++) {
    //     // cout << "DEBUG: " << it->fName << endl;
    //     cout << "DEBUG: " << (*it).t4 << endl;
        if(it->t1 >= 80) {
            cout << left << setw(fWidths.fName) << it->fName << setw(fWidths.lName) << it->lName 
                << setw(fWidths.t1) << it->t1 << setw(fWidths.t2) << it->t2 << setw(fWidths.t3) << it->t3 << setw(fWidths.t4) << it->t4 << endl;
        }
    }
}

void readFile(vector<Student>& students) {
    ifstream fin;
    fin.open("input.txt");
    string tmpLine;

    // while(!fin.eof()) {
    //     Student newStudent;
    //     fin >> newStudent.fName >> newStudent.lName >> newStudent.t1 >> newStudent.t2 >> newStudent.t3 >> newStudent.t4;
    //     students.push_back(newStudent);
    // }
    // while(getline(fin, tmpLine)) {
    //     Student newStudent;
    //     stringstream ss(tmpLine);
    //     ss >> newStudent.fName >> newStudent.lName >> newStudent.t1 >> newStudent.t2 >> newStudent.t3 >> newStudent.t4;
    //     students.push_back(newStudent);
    // }
    // while(!fin.eof()) {
    Student newStudent;
    while(fin >> newStudent.fName >> newStudent.lName >> newStudent.t1 >> newStudent.t2 >> newStudent.t3 >> newStudent.t4) 
        students.push_back(newStudent);
    // }
    fin.close();
}