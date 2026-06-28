#include<iostream>
#include<string>
using namespace std;
struct Ticket
{
    int ticketNo;
    string name;
    string source;
    string destination;
    int seatNo;
};
Ticket t[100];
int n = 0;
void bookTicket()
{
    cout<<"\nEnter Ticket Number: ";
    cin>>t[n].ticketNo;
    cin.ignore();
    cout<<"Enter Passenger Name: ";
    getline(cin,t[n].name);
    cout<<"Enter Source: ";
    getline(cin,t[n].source);
    cout<<"Enter Destination: ";
    getline(cin,t[n].destination);
    cout<<"Enter Seat Number: ";
    cin>>t[n].seatNo;
    n++;
    cout<<"\nTicket Booked Successfully!\n";
}
void displayTickets()
{
    if(n==0)
    {
        cout<<"\nNo Ticket Booked!\n";
        return;
    }
    cout<<"\n------ TICKET LIST ------\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nTicket No  : "<<t[i].ticketNo;
        cout<<"\nPassenger  : "<<t[i].name;
        cout<<"\nSource     : "<<t[i].source;
        cout<<"\nDestination: "<<t[i].destination;
        cout<<"\nSeat No    : "<<t[i].seatNo<<endl;
    }
}
void searchTicket()
{
    int no;
    cout<<"\nEnter Ticket Number: ";
    cin>>no;
    for(int i=0;i<n;i++)
    {
        if(t[i].ticketNo==no)
        {
            cout<<"\nTicket Found\n";
            cout<<"Passenger  : "<<t[i].name<<endl;
            cout<<"Source     : "<<t[i].source<<endl;
            cout<<"Destination: "<<t[i].destination<<endl;
            cout<<"Seat No    : "<<t[i].seatNo<<endl;
            return;
        }
    }
    cout<<"\nTicket Not Found!\n";
}
void cancelTicket()
{
    int no;
    cout<<"\nEnter Ticket Number: ";
    cin>>no;
    for(int i=0;i<n;i++)
    {
        if(t[i].ticketNo==no)
        {
            for(int j=i;j<n-1;j++)
            {
                t[j]=t[j+1];
            }
            n--;
            cout<<"\nTicket Cancelled Successfully!\n";
            return;
        }
    }
    cout<<"\nTicket Not Found!\n";
}
int main()
{
    int choice;
    do
    {
        cout<<"\n====== TICKET BOOKING SYSTEM ======\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. Display Tickets\n";
        cout<<"3. Search Ticket\n";
        cout<<"4. Cancel Ticket\n";
        cout<<"5. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                bookTicket();
                break;
            case 2:
                displayTickets();
                break;
            case 3:
                searchTicket();
                break;
            case 4:
                cancelTicket();
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