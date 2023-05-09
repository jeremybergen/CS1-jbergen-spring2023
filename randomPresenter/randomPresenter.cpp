/*
Name: Jeremy Bergen

Random Presenter
*/
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <sstream>

using namespace std;

struct Presenter {
    string fName;
    string lName;
};

void countLines(ifstream&, int&);
void readData(ifstream&, Presenter[], int&);
void randPresenter(Presenter[], int&, int&);
void printPresenter(Presenter&);
void writeData(int&, Presenter[], int, ofstream&);

int main(int argc, char *argv[]) {
    srand(time(0));

    int arrSize = 0;
    int randVictim = 0;
    ifstream fin;
    ofstream fout;
    fin.open("names.csv");
    
    // cout << "DEBUG: rdstate(): " << fin.rdstate() << endl;
    // cout << boolalpha << "DEBUG: good(): " << fin.good() << endl;
    // cout << boolalpha << "DEBUG: eof(): " << fin.eof() << endl;
    // cout << boolalpha << "DEBUG: fail(): " << fin.fail() << endl;
    // cout << boolalpha << "DEBUG: bad(): " << fin.bad() << endl;

    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;
    countLines(fin, arrSize);
    // cout << "After countLines" << endl;
    // cout << "DEBUG: rdstate(): " << fin.rdstate() << endl;
    // cout << boolalpha << "DEBUG: good(): " << fin.good() << endl;
    // cout << boolalpha << "DEBUG: eof(): " << fin.eof() << endl;
    // cout << boolalpha << "DEBUG: fail(): " << fin.fail() << endl;
    // cout << boolalpha << "DEBUG: bad(): " << fin.bad() << endl;
    // fin.seekg(0, fin.beg);
    // fin.close();
    // fin.open("names.csv");

    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;
    // cout << "DEBUG: arrSize: " << arrSize << endl;
    // cout << "DEBUG: sizeof(Presenter): " << sizeof(Presenter) << endl;

    Presenter presenters[arrSize];

    readData(fin, presenters, arrSize);

    // for(int i = 0; i < arrSize; i++) {
    //     cout << "DEBUG: " << presenters[i].fName << " " << presenters[i].lName << endl;
    // }

    randPresenter(presenters, arrSize, randVictim);
    printPresenter(presenters[randVictim]);

    fin.close();
    fout.open("names.csv");

    writeData(randVictim, presenters, arrSize, fout);

    fout.close();
    return 0;
}

void writeData(int& randVictim, Presenter presenters[], int arrCounter, ofstream& fout) {
    for(int i = 0; i < arrCounter; i++) {
        // if(i == randVictim) {
        //     continue;
        // }
        if(i != randVictim) {
            fout << presenters[i].lName << ", " << presenters[i].fName << endl;
        }
    }
}

void printPresenter(Presenter& randPresenter) {
    cout << "The next victim, I mean presenter, is....drumroll (don't say drumroll): " 
         << endl << randPresenter.fName << " " << randPresenter.lName << endl;
}

void randPresenter(Presenter presenters[], int& arrCounter, int& randVictim) {
    // cout << "DEBUG: arrCounter: " << arrCounter << endl;
    randVictim = random() % arrCounter;
    // cout << "DEBUG: randVictim: " << randVictim << endl;
}

void countLines(ifstream& fin, int& numLines){
    string tmpBuf;
    numLines = 0;
    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;

    while(getline(fin, tmpBuf)) {
        numLines++;
    }
    // cout << "DEBUG: numLines: " << numLines << endl;
    fin.clear();
    fin.seekg(0);
    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;

    
    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;

}

void readData(ifstream& fin, Presenter presenters[], int& arrCounter) {
    string inputLine;
    int counter = 0;
    // cout << "DEBUG: fin.tellg(): " << fin.tellg() << endl;
    while(getline(fin, inputLine)) {
        int nameCount = 0;
        string token;
        stringstream iss(inputLine);
        while(getline(iss, token, ',')) {
            if(nameCount == 0) {
                presenters[counter].lName = token;
            } else {
                size_t foundchar = token.find_first_not_of(' ');
                presenters[counter].fName = token.substr(foundchar);
            }
            nameCount++;
        }
        //inputLine = Bergen, Jeremy
        // cout << "DEBUG: inputLine: " << inputLine << endl;
        // size_t found = inputLine.find(", ");
        // presenters[counter].lName = inputLine.substr(0, found);
        // presenters[counter].fName = inputLine.substr(found+2);
        counter++;
    }
}