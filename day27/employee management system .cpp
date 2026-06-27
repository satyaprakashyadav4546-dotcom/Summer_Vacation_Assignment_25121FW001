#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    int id[n];
    string name[n];
    float salary[n];
    for(int i=0; i<n; i++)
    {
        cout << "\nEmployee " << i+1 << endl;
        cout << "Enter Employee ID: ";
        cin >> id[i];
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin,name[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
    }
    cout << "\n----- Employee Details -----\n";
    for(int i=0; i<n; i++)
    {
        cout << "\nID     : " << id[i];
        cout << "\nName   : " << name[i];
        cout << "\nSalary : " << salary[i] << endl;
    }
    return 0;
}