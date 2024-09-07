#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "------------------------------------------------------WELCOME TO ASHU'S RANDOM NUMBER GAME-------------------------------------";
    cout << endl;

    int a;
    cout << "Give a limit: " << endl;
    cin >> a;

    if (a <= 0) {
        cout << "Invalid Input. Please enter a number greater than 0." << endl;
        return 1;
    }

    int b = rand() % a;  //? Generate a random number between 0 and (a-1)
    int c = -1;

    while (c != b) {
        cout << "Guess a Number: " << endl;
        cin >> c;

        if (c > b) {
            cout << "Try Lower" << endl;
        } else if (c < b) {
            cout << "Try Higher" << endl;
        } else {
            cout << "Congratulations! You've guessed the right number! ;)" << endl;
        }
    }

    cout << "---------------------------------------------------------------THE END----------------------------------------------------------";
    return 0;
}
