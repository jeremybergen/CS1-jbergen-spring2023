/*
Name: Jeremy Bergen

hangman stages
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Stage 0:" << endl;
    string top = "|-------------|\n";
    string side = "|\n";
    string head = "O";

    cout << top << side << side << head;
    // string stage0 = "|----------------|\n|               \\|\n";
    // string stage1 = "|----------------|\n|              O\\|\n";
    // cout << stage0;
    // cout << stage1;
    // cout << "|-------------------|" << endl;
    // cout << "|                  \\|" << endl;
    // cout << "|" << endl;
    // cout << "|" << endl;

    // cout << "Stage 1:" << endl;
    // cout << "|-------------------|" << endl;
    // cout << "|                  \\|" << endl;
    // cout << "|                    O" << endl;
    // cout << "|" << endl;
    return 0;
}