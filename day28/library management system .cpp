#include<iostream>
#include<string>
using namespace std;
struct Book
{
    int id;
    string title;
    string author;
    int quantity;
};
Book b[100];
int n=0;
void addBook()
{
    cout<<"\nEnter Book ID: ";
    cin>>b[n].id;
    cin.ignore();

    cout<<"Enter Book Title: ";
    getline(cin,b[n].title);

    cout<<"Enter Author Name: ";
    getline(cin,b[n].author);

    cout<<"Enter Quantity: ";
    cin>>b[n].quantity;
    n++;
    cout<<"\nBook Added Successfully!\n";
}
void displayBooks()
{
    if(n==0)
    {
        cout<<"\nNo Books Available!\n";
        return;
    }
    cout<<"\n------ BOOK LIST ------\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"ID       : "<<b[i].id<<endl;
        cout<<"Title    : "<<b[i].title<<endl;
        cout<<"Author   : "<<b[i].author<<endl;
        cout<<"Quantity : "<<b[i].quantity<<endl;
    }
}
void searchBook()
{
    int id;
    cout<<"\nEnter Book ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            cout<<"\nBook Found\n";
            cout<<"Title    : "<<b[i].title<<endl;
            cout<<"Author   : "<<b[i].author<<endl;
            cout<<"Quantity : "<<b[i].quantity<<endl;
            return;
        }
    }
    cout<<"\nBook Not Found!\n";
}
void issueBook()
{
    int id;

    cout<<"\nEnter Book ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            if(b[i].quantity>0)
            {
                b[i].quantity--;
                cout<<"\nBook Issued Successfully!\n";
            }
            else
            {
                cout<<"\nBook Out of Stock!\n";
            }
            return;
        }
    }
    cout<<"\nBook Not Found!\n";
}
void returnBook()
{
    int id;
    cout<<"\nEnter Book ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            b[i].quantity++;
            cout<<"\nBook Returned Successfully!\n";
            return;
        }
    }
    cout<<"\nBook Not Found!\n";
}
void deleteBook()
{
    int id;
    cout<<"\nEnter Book ID: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            for(int j=i;j<n-1;j++)
            {
                b[j]=b[j+1];
            }
            n--;
            cout<<"\nBook Deleted Successfully!\n";
            return;
        }
    }
    cout<<"\nBook Not Found!\n";
}
int main()
{
    int choice;
    do
    {
        cout<<"\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Search Book\n";
        cout<<"4. Issue Book\n";
        cout<<"5. Return Book\n";
        cout<<"6. Delete Book\n";
        cout<<"7. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
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