/*
Name: Jeremy Bergen

All about the string (theory)
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string phrase;
    string searchStr;
    

    phrase = "How much wood could a woodchuck chuck if a woodchuck could chuck wood";

    string subStrWords[phrase.length()];

    // cout << "Is wood in our phrase? " << phrase.find("wood") << endl;
    cout << "What do you want to search for? ";
    getline(cin, searchStr);

    int woodIdx = 0;
    for(size_t i = 0; i < phrase.length(); i++) {
        i = phrase.find(searchStr, i);
        if(i != string::npos) {
            cout << "Found phrase at index: " << i << endl;
            subStrWords[woodIdx] = phrase.substr(i, searchStr.length());
            woodIdx++;
        } else {
            break;
        }
    }

    for(int i = 0; i < woodIdx; i++) {
        cout << "subStrWords[" << i << "]: " << subStrWords[i] << endl;
    }

    return 0;
}





    // string firstName;
    // string lastName;
    // string fullName;
    // string lowerFullName;
    // string someChar;
    // string searchStr;

    // cout << "What is your first name: ";
    // getline(cin, firstName);

    // cout << "What is your last name: ";
    // getline(cin, lastName);

    // fullName = firstName + " " + lastName;
    // lowerFullName = fullName;


    // cout << "The length of your string is: " << fullName.length() << endl;
    
    // for(size_t i = 0; i < fullName.length()+1; i++) {
    //     // cout << "fullName[" << i << "]: " << fullName[i] << endl;
    //     // cout << "fullName.at(" << i << "): " << fullName.at(i) << endl;
    //     lowerFullName[i] = tolower(lowerFullName[i]);
    // }

    // cout << "Welcome " << fullName << endl;

    // // cout << "Your name in lowercase is: " << fullName << endl;

    // // fullName.at()
    // // fullName.append(" is Awesome");
    // // fullName = fullName + " is Awesome";
    // // cout << fullName << endl;

    // // cout << "fullName.begin(): " << *fullName.begin() << endl;
    // // for(auto i = fullName.begin(); i != fullName.end(); i++) {
    // //     cout << *i << endl;
    // //     cout << "This character is at index: " << fullName.find(*i) << endl;
    // // }


    // // cout << "e is at index: " << fullName.find('e', 0) << endl;
    // // cout << "e is at index: " << fullName.find('e', 2) << endl;
    // // cout << "e is at index: " << fullName.find('e', 4) << endl;
    // // cout << "e is at index: " << fullName.find('e', 9) << endl;

    // // int foundIndex = 0;
    // // for(auto i = fullName.begin(); i != fullName.end(); i++) {

    // cout << "What do you want to search for in your string? ";
    // getline(cin, searchStr);

    // for(size_t i = 0; i < searchStr.size(); i++) {
    //     searchStr.at(i) = tolower(searchStr.at(i));
    // }

    // cout << "lowerFullName: " << lowerFullName << endl;
    // for(size_t i = 0; i < lowerFullName.length(); i++) {
    //     i = lowerFullName.find(searchStr, i);
    //     if(i != string::npos) {
    //         cout << "Found string at index: " << i << endl;
    //     } else {
    //         i = string::npos - 1;
    //     }
    // }

    // string tmpStr = fullName.substr(3, 8);
    // cout << "tmpStr: " << tmpStr << endl;