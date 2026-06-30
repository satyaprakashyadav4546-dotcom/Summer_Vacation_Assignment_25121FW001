#include <iostream>
#include <string>
using namespace std;
const int SIZE = 100;
int main()
{
    int choice;
    int total = 0;
    int empId[SIZE], age[SIZE];
    string name[SIZE], department[SIZE], designation[SIZE];
    float basicSalary[SIZE], bonus[SIZE], deduction[SIZE], netSalary[SIZE];
    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                if(total < SIZE)
                {
                    cout << "\nEnter Employee ID: ";
                    cin >> empId[total];
                    cin.ignore();
                    cout << "Enter Employee Name: ";
                    getline(cin, name[total]);
                    cout << "Enter Department: ";
                    getline(cin, department[total]);
                    cout << "Enter Designation: ";
                    getline(cin, designation[total]);
                    cout << "Enter Age: ";
                    cin >> age[total];
                    cout << "Enter Basic Salary: ";
                    cin >> basicSalary[total];
                    cout << "Enter Bonus: ";
                    cin >> bonus[total];
                    cout << "Enter Deduction: ";
                    cin >> deduction[total];
                    netSalary[total] = basicSalary[total] + bonus[total] - deduction[total];
                    total++;
                    cout << "\nEmployee Added Successfully!\n";
                }
                else
                {
                    cout << "\nEmployee Record Full!\n";
                }
                break;
            case 2:
                if(total == 0)
                {
                    cout << "\nNo Employee Records Found!\n";
                }
                else
                {
                    for(int i = 0; i < total; i++)
                    {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "Employee ID : " << empId[i] << endl;
                        cout << "Name : " << name[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Designation : " << designation[i] << endl;
                        cout << "Age : " << age[i] << endl;
                        cout << "Basic Salary : " << basicSalary[i] << endl;
                        cout << "Bonus : " << bonus[i] << endl;
                        cout << "Deduction : " << deduction[i] << endl;
                        cout << "Net Salary : " << netSalary[i] << endl;
                    }
                }
                break;
            case 3:
            {
                int id;
                bool found = false;
                cout << "Enter Employee ID: ";
                cin >> id;
                for(int i = 0; i < total; i++)
                {
                    if(empId[i] == id)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "Name : " << name[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Designation : " << designation[i] << endl;
                        cout << "Net Salary : " << netSalary[i] << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!\n";
                break;
            }
            case 4:
            {
                int id;
                bool found = false;
                cout << "Enter Employee ID to Update: ";
                cin >> id;
                cin.ignore();
                for(int i = 0; i < total; i++)
                {
                    if(empId[i] == id)
                    {
                        cout << "Enter New Name: ";
                        getline(cin, name[i]);
                        cout << "Enter New Department: ";
                        getline(cin, department[i]);
                        cout << "Enter New Designation: ";
                        getline(cin, designation[i]);
                        cout << "Enter New Age: ";
                        cin >> age[i];
                        cout << "Enter New Basic Salary: ";
                        cin >> basicSalary[i];
                        cout << "Enter Bonus: ";
                        cin >> bonus[i];
                        cout << "Enter Deduction: ";
                        cin >> deduction[i];
                        netSalary[i] = basicSalary[i] + bonus[i] - deduction[i];
                        cout << "\nEmployee Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!\n";
                break;
            }
            case 5:
            {
                int id;
                bool found = false;
                cout << "Enter Employee ID to Delete: ";
                cin >> id;
                for(int i = 0; i < total; i++)
                {
                    if(empId[i] == id)
                    {
                        for(int j = i; j < total - 1; j++)
                        {
                            empId[j] = empId[j + 1];
                            name[j] = name[j + 1];
                            department[j] = department[j + 1];
                            designation[j] = designation[j + 1];
                            age[j] = age[j + 1];
                            basicSalary[j] = basicSalary[j + 1];
                            bonus[j] = bonus[j + 1];
                            deduction[j] = deduction[j + 1];
                            netSalary[j] = netSalary[j + 1];
                        }
                        total--;
                        cout << "\nEmployee Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!\n";
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