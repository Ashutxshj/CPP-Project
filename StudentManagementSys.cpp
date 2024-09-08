//? Create a program to store and manage student data (name, roll number, grades)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Student
{
public:
    int RollNo;
    string Name;
    char Grade;
    vector<int> RollNos;
    vector<string> Names;
    vector<char> Grades;
    unordered_map<int, string> RollNo_to_Names;
    unordered_map<int, char> RollNo_to_Grades;
    unordered_map<string, char> Names_to_Grades;
    Student(string name, int rollNo, char grade)
    {
        this->name = Name;
        this->rollNo = RollNo;
        this->grade = Grade;
    }
    void get_details()
    {
        cout << "What's the Registration Number of Student" << endl;
        cin >> RollNo;
        cout << "What's the Name of Student?: " << endl;
        cin >> Name;
        cout << "What's the Grade of Student?: " << endl;
        cin >> Grade;
        RollNos.push_back(RollNo);
        Names.push_back(Name);
        Grades.push_back(Grade);
        for (int i = 0; i < RollNos.size(); i++)
        {
            RollNo_to_Names.insert({RollNos[i], Names[i]});
            RollNo_to_Grades.insert({RollNos[i], Grades[i]});
            Names_to_Grades.insert({Names[i], Grades[i]});
        }
    }
    string get_names_from_rollno()
    {
        int rn;
        cout << "Give Roll No:" << endl;
        cin >> rn;
        unordered_map<string, int>::iterator it = RollNo_to_Grades.begin();
        while (it != RollNo_to_Grades())
        {
            cout << it->begin << " has scored the grade: " << it->second << endl;
        }
    }
    // more functions like this
};
int main()
{
    cout << "----------------------------------------------WELCOME TO ASHU's STUDENT MANAGEMENT SYSTEM---------------------------" << endl;
    cout << "What are the number of students?: " << endl;
    int n;
    cin >> n;
    Student st = Student();
    for (int i = 0; i < n; i++)
    {
        st.get_details();
    }
    cout << "What do you want to do?:" << endl;
    int lol;
    cin >> lol;
    switch (lol)
    {
    case 1:
        st.get_names_from_rollno() break;
        // more like this
    default:
        break;
    }
}