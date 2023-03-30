/*
Name: Jeremy Bergen

Kattis simonsays
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int numLines;
    
    cin >> numLines;

    string inputLines[numLines];

    for(int i = 0; i < numLines; i++) {
        cin >> inputLines[i];
    }

    for(int i = 0; i < numLines; i++) {
        size_t foundSimon;
        foundSimon = inputLines[i].find("Simon says");
        if (foundSimon != string::npos) {
            cout << inputLines[i].substr(11);
        }
    }

    return 0;
}