//? Build a system to record votes for 3-5 candidates and display the winner.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int winner(unordered_map<string, int> a)
{
for(auto x:a){

}
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
