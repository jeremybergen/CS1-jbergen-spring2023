/*
Name: Jeremy Bergen

file i/o
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    // int num1, num2, num3, num4, num5;
    int nums[100];
    int lineCounter = 0;
    ifstream fin;
    ofstream fout;

    fin.open("files/input.txt");
    // Windows
    // fin.open("files\\input.txt");
    fout.open("files/output.txt");
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

    while(!fin.eof()) {
        fin >> nums[lineCounter];
        lineCounter++;
    }

    for(int i = 0; i < lineCounter; i++) {
        cout << "nums[" << i << "]: " << nums[i] << endl;
    }

    fin.close();
    fout.close();
    return 0;
}