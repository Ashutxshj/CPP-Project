//? Create a game where the computer generates a random number, and the user guesses it
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    //* rand() returns a pseudo-random number in the range of [0, RAND_MAX)
    cout << "------------------------------------------------------WELCOME TO ASHU'S RANDOM NUMBER GAME-------------------------------------";
    cout << endl;
    int a;
    cout << "Give a limit: " << endl;
    cin >> a;
    // try(a int)
    // {
    //     cout << "Invalid Input" << endl;
    // }
    int b = rand() % a;
    int c=0;
    while (c != b)
    {
        cout << "Guess a Number: " << endl;
        cin >> c;
        cout << "OOPS! Wrong Number" << endl;
        if (c < b)
        {
            cout << "Try Higher" << endl;
        }
        else if (c > b)
        {
            cout << "Try Lower" << endl;
        }
    }
    cout << "---------------------------------------------------------------THE END----------------------------------------------------------";
}