#include<iostream>
#include<string>
using namespace std;
struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};
Contact c[100];
int n = 0;
void addContact()
{
    cout<<"\nEnter Contact ID: ";
    cin>>c[n].id;
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin,c[n].name);
    cout<<"Enter Phone Number: ";
    getline(cin,c[n].phone);
    cout<<"Enter Email: ";
    getline(cin,c[n].email);
    n++;
    cout<<"\nContact Added Successfully!\n";
}
void displayContacts()
{
    if(n==0)
    {
        cout<<"\nNo Contacts Found!\n";
        return;
    }
    cout<<"\n------ CONTACT LIST ------\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nContact "<<i+1<<endl;
        cout<<"ID    : "<<c[i].id<<endl;
        cout<<"Name  : "<<c[i].name<<endl;
        cout<<"Phone : "<<c[i].phone<<endl;
        cout<<"Email : "<<c[i].email<<endl;
    }
}
void searchContact()
{
    int id;
    cout<<"\nEnter Contact ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(c[i].id==id)
        {
            cout<<"\nContact Found\n";
            cout<<"Name  : "<<c[i].name<<endl;
            cout<<"Phone : "<<c[i].phone<<endl;
            cout<<"Email : "<<c[i].email<<endl;
            return;
        }
    }
    cout<<"\nContact Not Found!\n";
}
void deleteContact()
{
    int id;
    cout<<"\nEnter Contact ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(c[i].id==id)
        {
            for(int j=i;j<n-1;j++)
            {
                c[j]=c[j+1];
            }
            n--;
            cout<<"\nContact Deleted Successfully!\n";
            return;
        }
    }
    cout<<"\nContact Not Found!\n";
}
int main()
{
    int choice;
    do
    {
        cout<<"\n====== CONTACT MANAGEMENT SYSTEM ======\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Delete Contact\n";
        cout<<"5. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(choice!=5);
    return 0;
}