#include <iostream>
#include <string>
using namespace std;
const int SIZE = 100;
int id[SIZE], age[SIZE];
string name[SIZE], branch[SIZE];
float marks[SIZE], percentage[SIZE];
int total = 0;
// Add Student
void addStudent()
{
    if(total >= SIZE)
    {
        cout << "\nRecord Full!\n";
        return;
    }
    cout << "\nEnter Student ID: ";
    cin >> id[total];
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name[total]);
    cout << "Enter Branch: ";
    getline(cin, branch[total]);
    cout << "Enter Age: ";
    cin >> age[total];
    cout << "Enter Total Marks (Out of 500): ";
    cin >> marks[total];
    percentage[total] = marks[total] / 5.0;
    total++;
    cout << "\nStudent Added Successfully!\n";
}
// Display Students
void displayStudents()
{
    if(total == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }
    for(int i = 0; i < total; i++)
    {
        cout << "\n----------- Student " << i + 1 << " -----------\n";
        cout << "ID         : " << id[i] << endl;
        cout << "Name       : " << name[i] << endl;
        cout << "Branch     : " << branch[i] << endl;
        cout << "Age        : " << age[i] << endl;
        cout << "Marks      : " << marks[i] << endl;
        cout << "Percentage : " << percentage[i] << "%" << endl;
    }
}
// Search Student
void searchStudent()
{
    int searchId;
    bool found = false;
    cout << "\nEnter Student ID: ";
    cin >> searchId;
    for(int i = 0; i < total; i++)
    {
        if(id[i] == searchId)
        {
            cout << "\nRecord Found\n";
            cout << "Name       : " << name[i] << endl;
            cout << "Branch     : " << branch[i] << endl;
            cout << "Age        : " << age[i] << endl;
            cout << "Marks      : " << marks[i] << endl;
            cout << "Percentage : " << percentage[i] << "%" << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "\nStudent Not Found!\n";
}
// Update Student
void updateStudent()
{
    int searchId;
    bool found = false;
    cout << "\nEnter Student ID to Update: ";
    cin >> searchId;
    cin.ignore();
    for(int i = 0; i < total; i++)
    {
        if(id[i] == searchId)
        {
            cout << "Enter New Name: ";
            getline(cin, name[i]);
            cout << "Enter New Branch: ";
            getline(cin, branch[i]);
            cout << "Enter New Age: ";
            cin >> age[i];
            cout << "Enter New Marks: ";
            cin >> marks[i];
            percentage[i] = marks[i] / 5.0;
            cout << "\nRecord Updated Successfully!\n";
            found = true;
            break;
        }
    }
    if(!found)
        cout << "\nStudent Not Found!\n";
}
// Delete Student
void deleteStudent()
{
    int searchId;
    bool found = false;
    cout << "\nEnter Student ID to Delete: ";
    cin >> searchId;
    for(int i = 0; i < total; i++)
    {
        if(id[i] == searchId)
        {
            for(int j = i; j < total - 1; j++)
            {
                id[j] = id[j + 1];
                name[j] = name[j + 1];
                branch[j] = branch[j + 1];
                age[j] = age[j + 1];
                marks[j] = marks[j + 1];
                percentage[j] = percentage[j + 1];
            }
            total--;
            cout << "\nRecord Deleted Successfully!\n";
            found = true;
            break;
        }
    }
    if(!found)
        cout << "\nStudent Not Found!\n";
}
int main()
{
    int choice;
    do
    {
        cout << "\n========== COLLEGE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }
    } while(choice != 6);
    return 0;
}