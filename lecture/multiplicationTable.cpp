/*
Name: Jeremy Bergen

Multiplication Table

    1    2    3    4    5    6    7    8    9   10
    2    4    6    8   10   12   14   16   18   20
    3    6    9   12   15   18   21   24   27   30
    4    8   12   16   20   24   28   32   36   40
    5   10   15   20   25   30   35   40   45   50
    6   12   18   24   30   36   42   48   54   60
    7   14   21   28   35   42   49   56   63   70
    8   16   24   32   40   48   56   64   72   80
    9   18   27   36   45   54   63   72   81   90
   10   20   30   40   50   60   70   80   90  100
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

void promptName(string&);
void greetUser(const string&);
void printTable(int, int);
void promptSize(int&, int&);

int main(int argc, char *argv[]) {
    string firstName;
    int height = 0;
    int width = 0;

    promptName(firstName);
    greetUser(firstName);

    promptSize(height, width);
    cout << "DEBUG: inside main: " << endl;
    cout << "DEBUG: height: " << height << endl;
    cout << "DEBUG: width: " << width << endl;

    printTable(height, width);

    return 0;
}

void promptSize(int& height, int& width) {
    cout << "How high is your table: ";
    cin >> height;

    cout << "How wide is your table: ";
    cin >> width;
    cout << "DEBUG: inside promptSize: " << endl;
    cout << "DEBUG: height: " << height << endl;
    cout << "DEBUG: width: " << width << endl;
}

void printTable(int height, int width) {
    /*
    1    2    3    4    5    6    7    8    9   10
    2    4    6    8   10   12   14   16   18   20
    3    6    9   12   15   18   21   24   27   30
    4    8   12   16   20   24   28   32   36   40
    5   10   15   20   25   30   35   40   45   50
    6   12   18   24   30   36   42   48   54   60
    7   14   21   28   35   42   49   56   63   70
    8   16   24   32   40   48   56   64   72   80
    9   18   27   36   45   54   63   72   81   90
   10   20   30   40   50   60   70   80   90  100
    */
    for(int i=1; i<=height; i++) {
        for(int j=1; j<width+1; j++) {
            cout << setw(5) << j*i;
        }
        cout << endl;
    }
}

void greetUser(const string& name) {
    printf("Welcome %s to our multiplication table printer.\n", name.c_str());
}

void promptName(string& name) {
    cout << "Please enter your first name: " << endl;
    getline(cin, name);
}