#include <iostream>
#include <string>
using namespace std;
const int SIZE = 100;
int main()
{
    int choice;
    int total = 0;
    int id[SIZE], age[SIZE];
    string name[SIZE], roll[SIZE], branch[SIZE];
    float marks[SIZE], percentage[SIZE];
    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                if(total < SIZE)
                {
                    cout << "\nEnter Student ID: ";
                    cin >> id[total];
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, name[total]);
                    cout << "Enter Roll Number: ";
                    getline(cin, roll[total]);
                    cout << "Enter Branch: ";
                    getline(cin, branch[total]);
                    cout << "Enter Age: ";
                    cin >> age[total];
                    cout << "Enter Marks (out of 500): ";
                    cin >> marks[total];
                    percentage[total] = marks[total] / 5.0;
                    total++;
                    cout << "\nStudent Added Successfully!\n";
                }
                else
                {
                    cout << "\nRecord Full!\n";
                }
                break;
            case 2:
                if(total == 0)
                {
                    cout << "\nNo Record Found!\n";
                }
                else
                {
                    for(int i = 0; i < total; i++)
                    {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "ID : " << id[i] << endl;
                        cout << "Name : " << name[i] << endl;
                        cout << "Roll : " << roll[i] << endl;
                        cout << "Branch : " << branch[i] << endl;
                        cout << "Age : " << age[i] << endl;
                        cout << "Marks : " << marks[i] << endl;
                        cout << "Percentage : " << percentage[i] << "%" << endl;
                    }
                }
                break;
            case 3:
            {
                string r;
                bool found = false;

                cin.ignore();
                cout << "Enter Roll Number: ";
                getline(cin, r);
                for(int i = 0; i < total; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "\nRecord Found\n";
                        cout << "ID : " << id[i] << endl;
                        cout << "Name : " << name[i] << endl;
                        cout << "Branch : " << branch[i] << endl;
                        cout << "Marks : " << marks[i] << endl;
                        cout << "Percentage : " << percentage[i] << "%" << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Record Not Found!\n";
                break;
            }
            case 4:
            {
                string r;
                bool found = false;
                cin.ignore();
                cout << "Enter Roll Number to Update: ";
                getline(cin, r);
                for(int i = 0; i < total; i++)
                {
                    if(roll[i] == r)
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
                    cout << "Record Not Found!\n";
                break;
            }
            case 5:
            {
                string r;
                bool found = false;
                cin.ignore();
                cout << "Enter Roll Number to Delete: ";
                getline(cin, r);
                for(int i = 0; i < total; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j < total - 1; j++)
                        {
                            id[j] = id[j + 1];
                            name[j] = name[j + 1];
                            roll[j] = roll[j + 1];
                            branch[j] = branch[j + 1];
                            age[j] = age[j + 1];
                            marks[j] = marks[j + 1];
                            percentage[j] = percentage[j + 1];
                        }
                        total--;
                        found = true;
                        cout << "\nRecord Deleted Successfully!\n";
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!\n";
                break;
            }
            case 6:
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }
    } while(choice != 6);
    return 0;
}