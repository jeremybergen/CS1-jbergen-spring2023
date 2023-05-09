/*
Name: Jeremy Bergen
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct Student {
    string fName;
    string lName;
    int t1, t2, t3, t4;
};

void readFile(vector<Student>&);

int main(int argc, char *argv[]) {
    vector<Student> students;
    readFile(students);

    // for(int i = 0; i < students.size(); i++)
    // for(auto it: students)
    for(auto it = students.begin(); it != students.end(); it++) {
        // cout << "DEBUG: " << it->fName << endl;
        cout << "DEBUG: " << (*it).t4 << endl;
    }
    
    return 0;
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