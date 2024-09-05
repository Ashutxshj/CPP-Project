//? Create a simple calculator to perform basic arithmetic operations (+, -, *, /).
#include <iostream>
#include<iomanip> //for setting precision
using namespace std;
int main()
{
    cout << "-------------------------------------Welcome to Ashu's Calculator-----------------------------------" << endl;
    cout << "Give Input Numbers: ";
    float a, b, answer=0;
    int operation;
    cin >> a >> b;
    cout << "What operation to perform?" << endl;
    cout << "1.Add\n2.Sub\n3.Mult\n4.Div" << endl;
    cin >> operation;
    switch (operation)
    {
    case 1:
        answer = a + b;
        break;
    case 2:
        answer = a - b;
        break;
    case 4:
        if (b != 0)
        {
            answer = a / b;
        }
        else
        {
            cout << "ZeroDivisionError";
        }
        break;
    case 3:
        answer = a * b;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    cout << "Answer:" << answer<<endl;
    cout << "--------------------------------------------THE END------------------------------------------------------";
}