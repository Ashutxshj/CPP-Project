//? Simulate basic ATM functionalities like checking Balance, withdrawing, and depositing money.
#include <iostream>
#include <string>
using namespace std;
class Ashu_Bank(AccNo, Balance, AccType, AccHolderName)
{
private:
    int AccNo, Balance, InterestRate;
    String AccHolderName, AccType;

public:
    int checkBalance(int AccNo)
    {
        return Balance;
    }
    string withdrawAmount(int AccNo, int amount)
    {
        Balance -= amount;
        return "{Amount} Deposited";
    }
    string depositMoney(int AccNo, int amount)
    {
        Balance += amount;
        return "{Amount} Deposited";
    }
};
int main()
{
    cout << "--------------------------------------------------WELCOME TO ASHU's BANK-------------------------------------------------------" << endl;
    cout << "Whats your AccNo? " << endl;
    int AccNo = 0;
    cin >> AccNo;
    if (AccNo <= 0)
    {
        cout << "Invalid Input" << endl;
    }
    Ashu_Bank Ashu = Ashu_Bank(AccNo, 10000, "Savings", "Ashutosh");
    cout << "What would you like to do?" << endl;
    cout << "1. Check Balance\n2. Withdraw Amount\n3. Deposit Money" << endl;
    int s;
    cin >> s;
    switch (s)
    {
    case 1:
        cout << Ashu.checkBalance(AccNo);
        break;

    case 2:
        cout << Ashu.withdrawAmount(AccNo, 5000) << endl;
        cout << Ashu.checkBalance(AccNo);
        break;

    case 3:
        cout << Ashu.depositMoney(AccNo, 5000) << endl;
        cout << Ashu.checkBalance(AccNo);
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    };
    cout << "---------------------------------------------------------THE END-------------------------------------------------------------------";
}