#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int roll[n];
    string name[n];
    float marks[n];
    for(int i=0; i<n; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        cout << "Enter Roll No: ";
        cin >> roll[i];
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin,name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }
    cout << "\n----- Student Records -----\n";

    for(int i=0; i<n; i++)
    {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
    return 0;
}