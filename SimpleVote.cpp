//? Build a system to record votes for 3-5 candidates and display the winner.

//* Improvement:-(1)Input Validation (2)Tie Handling
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
string winner(unordered_map<string, int> a)
{
    int MaxVotes = 0;
    string WinningCandi;
    for (auto x : a)
    {
        if (x.second > MaxVotes)
        {
            MaxVotes = x.second;
            WinningCandi = x.first;
        }
    }
    return WinningCandi;
}
int main()
{
    vector<string> Candidates;
    int vote, num;
    string candi;
    cout << "--------------------------------------------WELCOME TO ASHU'S VOTING SYSTEM--------------------------------------------------" << endl;
    cout << "How many Candidates are appearing for voting?" << endl;
    cin >> num;
    cout << "Give out their names:" << endl;
    unordered_map<string, int> VoteBank;
    for (int i = 0; i < num; i++)
    {
        cin >> candi;
        Candidates.push_back(candi);
    }
    cout << "Give your votes:" << endl;
    for (int i = 0; i < Candidates.size(); i++)
    {
        cout << "For " << Candidates[i] << ": ";
        cin >> vote;
        VoteBank[Candidates[i]] = vote; //? inserting in hashmap
    }
    cout << "The Winner is " << winner(VoteBank) << endl;
    cout << "----------------------------------------------------THE END------------------------------------------------";
}
