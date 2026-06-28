#include<iostream>
#include<string>
using namespace std;
struct Account
{
    int accNo;
    string name;
    float balance;
};

Account a[100];
int n = 0;

void createAccount()
{
    cout<<"\nEnter Account Number: ";
    cin>>a[n].accNo;
    cin.ignore();
    cout<<"Enter Account Holder Name: ";
    getline(cin,a[n].name);
    cout<<"Enter Initial Balance: ";
    cin>>a[n].balance;
    n++;
    cout<<"\nAccount Created Successfully!\n";
}
void displayAccounts()
{
    if(n==0)
    {
        cout<<"\nNo Account Found!\n";
        return;
    }
    cout<<"\n----- ACCOUNT LIST -----\n";

    for(int i=0;i<n;i++)
    {
        cout<<"\nAccount No : "<<a[i].accNo;
        cout<<"\nName       : "<<a[i].name;
        cout<<"\nBalance    : "<<a[i].balance<<endl;
    }
}
void deposit()
{
    int acc;
    float amount;
    cout<<"\nEnter Account Number: ";
    cin>>acc;
    for(int i=0;i<n;i++)
    {
        if(a[i].accNo==acc)
        {
            cout<<"Enter Deposit Amount: ";
            cin>>amount;

            a[i].balance += amount;

            cout<<"\nAmount Deposited Successfully!\n";
            return;
        }
    }
    cout<<"\nAccount Not Found!\n";
}
void withdraw()
{
    int acc;
    float amount;
    cout<<"\nEnter Account Number: ";
    cin>>acc;
    for(int i=0;i<n;i++)
    {
        if(a[i].accNo==acc)
        {
            cout<<"Enter Withdraw Amount: ";
            cin>>amount;

            if(amount<=a[i].balance)
            {
                a[i].balance -= amount;
                cout<<"\nWithdrawal Successful!\n";
            }
            else
            {
                cout<<"\nInsufficient Balance!\n";
            }
            return;
        }
    }
    cout<<"\nAccount Not Found!\n";
}
void searchAccount()
{
    int acc;
    cout<<"\nEnter Account Number: ";
    cin>>acc;

    for(int i=0;i<n;i++)
    {
        if(a[i].accNo==acc)
        {
            cout<<"\nAccount Found\n";
            cout<<"Account No : "<<a[i].accNo<<endl;
            cout<<"Name       : "<<a[i].name<<endl;
            cout<<"Balance    : "<<a[i].balance<<endl;
            return;
        }
    }
    cout<<"\nAccount Not Found!\n";
}
void deleteAccount()
{
    int acc;
    cout<<"\nEnter Account Number: ";
    cin>>acc;
    for(int i=0;i<n;i++)
    {
        if(a[i].accNo==acc)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            cout<<"\nAccount Deleted Successfully!\n";
            return;
        }
    }
    cout<<"\nAccount Not Found!\n";
}
int main()
{
    int choice;
    do
    {
        cout<<"\n========== BANK ACCOUNT SYSTEM ==========\n";
        cout<<"1. Create Account\n";
        cout<<"2. Display Accounts\n";
        cout<<"3. Deposit Money\n";
        cout<<"4. Withdraw Money\n";
        cout<<"5. Search Account\n";
        cout<<"6. Delete Account\n";
        cout<<"7. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                searchAccount();
                break;

            case 6:
                deleteAccount();
                break;

            case 7:
                cout<<"\nThank You!\n";
                break;

            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(choice!=7);
    return 0;
}