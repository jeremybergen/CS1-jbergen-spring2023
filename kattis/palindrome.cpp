/*
Name: Jeremy Bergen

Palindrome checker
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string inputString;
    string sanitizedString = "";
    string reverseString = "";

    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, inputString);

    //Get rid of spaces in inputString
    for (size_t i = 0; i < inputString.length(); i++) {
        if (inputString.at(i) != ' ') {
            sanitizedString += inputString.at(i);
        }
    }

    for(int i = sanitizedString.length()-1; i >= 0; i--) {
        // reverseString.append((string)inputString[i]);
        reverseString += sanitizedString.at(i);
    }

    if (sanitizedString == reverseString) {
        cout << "Your string is a palindrome!" << endl;
    }
    // cout << "DEBUG: inputString:\t" << inputString << endl;
    // cout << "DEBUG: reverseString:\t" << reverseString << endl;

    return 0;
}
