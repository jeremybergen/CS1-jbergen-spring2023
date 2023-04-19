/*
Name: Jeremy Bergen

file i/o
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readData(fstream&, string[], int&);
void writeData(fstream&, string[], int);

int main(int argc, char *argv[]) {
    // int num1, num2, num3, num4, num5;
    string nums[100];
    int lineCounter = 0;
    // ifstream fin;
    // ofstream fout;
    fstream fs;

    fs.open("files/fstemp.txt", fstream::in | fstream::out | fstream::app);

    // fin.open("files/input.txt");
    // Windows
    // fin.open("files\\input.txt");
    // fout.open("files/output.txt");
    // Absolute path (usually should not do)
    // fout.open("/home/jbergen/projects/CS1-jbergen/lecture/files/output.txt");
    //Windows
    // fout.open("c:\\home\\jbergen\\projects\\CS1-jbergen\\lecture\\files\\output.txt");

    // fin >> num1 >> num2 >> num3 >> num4 >> num5;

    // fout << "num1: " << num1 << endl;
    // fout << "num2: " << num2 << endl;
    // fout << "num3: " << num3 << endl;
    // fout << "num4: " << num4 << endl;
    // fout << "num5: " << num5 << endl;

    readData(fs, nums, lineCounter);

    fs.seekg(0);
    writeData(fs, nums, lineCounter);

    // fin.close();
    // fout.close();
    fs.close();
    return 0;
}

void writeData(fstream& fout, string nums[], int lineCounter) {
    // cout << "DEBUG: lineCounter: " << lineCounter << endl;
    for(int i = 0; i < lineCounter; i++) {
        fout << "nums[" << i << "]: " << nums[i] << endl;
    }
}

void readData(fstream& fin, string nums[], int& lineNumber){
    while(!fin.eof()) {
        // if (fin >> nums[lineCounter])
        // cout << "DEBUG: inside while loop" << endl;
        getline(fin, nums[lineNumber]);
        lineNumber++;
    }
}