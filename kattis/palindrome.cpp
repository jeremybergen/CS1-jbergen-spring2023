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
    // string reverseString = "";
    bool isPalindrome = true;

    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, inputString);

    //Get rid of spaces in inputString
    for (size_t i = 0; i < inputString.length(); i++) {
        // if (inputString.at(i) != ' ' || inputString.at(i) != ',' || inputString.at(i) != '.') {
        if((inputString.at(i) >= 65 && inputString.at(i) <= 90) || (inputString.at(i) >= 'a' && inputString.at(i) <= 'z')) {
            sanitizedString += tolower(inputString.at(i));
        }
    }

    // for(int i = sanitizedString.length()-1; i >= 0; i--) {
    //     // reverseString.append((string)inputString[i]);
    //     reverseString += sanitizedString.at(i);
    // }
    size_t sanStrLength = sanitizedString.length()-1;
    for(size_t i = 0; i < sanitizedString.length()/2; i++) {
        cout << "i: " << i << endl;
        
        if(sanitizedString.at(i) != sanitizedString.at(sanStrLength-i)) {
            isPalindrome = false;
            break;
        }

        // sanStrLength--;
    }

    if (isPalindrome) {
        cout << "Your string is a palindrome!" << endl;
    } else {
        cout << "Your string is NOT a palindrome!" << endl;
    }
    // cout << "DEBUG: inputString:\t" << inputString << endl;
    // cout << "DEBUG: reverseString:\t" << reverseString << endl;

    return 0;
}
