/*
Name: Jeremy Bergen

Kattis simonsays
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void kattis();
string solver(string);
void tests();

int main(int argc, char *argv[]) {
    if(argc >= 2 && (string)argv[1] == "test") {
        tests();
        return 0;
    }
    kattis();

    return 0;
}

void tests() {
    assert(solver("Simon says hello.") == " hello.");
    assert(solver("Goodbye everyone.") == "");
    cout << "All test cases passed" << endl;
}

string solver(string inputLine) {
    size_t foundSimon;
    foundSimon = inputLine.find("Simon says");
    if (foundSimon != string::npos) {
        return inputLine.substr(10);
    }
    return "";
}

void kattis() {
    int numLines;
    
    cin >> numLines;
    // still in buffer: "\n"
    // cin.get();
    cin.ignore(1000, '\n');

    // cout << "DEBUG: numLines: " << numLines << endl;

    string inputLines[numLines];

    for(int i = 0; i < numLines; i++) {
        // WRONG!!!!! cin >> inputLines[i];
        // cout << "DEBUG: inside for loop" << endl;
        getline(cin, inputLines[i]);
    }

    // for (int i = 0; i < numLines; i++) {
    //     cout << "DEBUG: inputLines[" << i << "]: " << inputLines[i] << endl;
    // }

    for(int i = 0; i < numLines; i++) {
        string answer = solver(inputLines[i]);
        if (answer != "") {
            cout << answer << endl;
        }

        // OLD: cout << solver(inputLines[i]) << endl;
    }

}