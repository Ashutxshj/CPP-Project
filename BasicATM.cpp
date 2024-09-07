//? Simulate basic ATM functionalities like checking Balance, withdrawing, and depositing money.
#include <iostream>
#include <string>
using namespace std;
class Ashu_Bank
{
private:
    int AccNo, Balance;
    string AccHolderName, AccType;

public:
    Ashu_Bank(int accNo, int balance, string accType, string accHolderName)
    {
        this->AccNo = accNo;
        this->Balance = balance;
        this->AccType = accType;
        this->AccHolderName = accHolderName;
    }
    int checkBalance()
    {
        return Balance;
    }
    string withdrawAmount(int amount)
    {
        if (amount > Balance)
        {
            return "Insufficient balance!";
        }
        Balance -= amount;
        return "Amount Withdrawn: " + to_string(amount);
    }
    string depositMoney(int amount)
    {
        Balance += amount;
        return "Amount Deposited: " + to_string(amount);
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
    cout << "1. Check Balance\n2. Withdraw Amount\n3. Deposit Money\n4. Exit" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Current Balance: " << Ashu.checkBalance() << endl;
        break;

    case 2:
        int amt;
        cout << "Enter amount to withdraw: " << endl;
        cin >> amt;
        cout << Ashu.withdrawAmount(amt) << endl;
        cout << Ashu.checkBalance() << endl;
        break;

    case 3:
        int am;
        cout << "Enter amount to deposit: " << endl;
        cin >> am;
        cout << Ashu.depositMoney(am) << endl;
        cout << Ashu.checkBalance() << endl;
        break;
    case 4:
        cout << "Thank You for using Ashu's bank" << endl;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
    cout << "-------------------------------------------------------THE END-----------------------------------------------------------------";
}