/*
Name: Jeremy Bergen

Random Numbers!!!
*/
#include <iostream>
#include <random>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "time(0): " << time(0) << endl;
    sleep(1);
    cout << "time(0): " << time(0) << endl;
    // sleep(1);
    cout << "time(0): " << time(0) << endl;
    sleep(1);
    cout << "time(0): " << time(0) << endl;
    sleep(1);
    cout << "time(0): " << time(0) << endl;

    // time_t
    // srand(time(0));

    // for (int i = 0; i < 10; i++) {
    //     cout << "random" << i << ": " << random() << endl;
    // }

    return 0;
}