#include <iostream>
#include <string>
using namespace std;
const int SIZE = 100;
int main()
{
    int choice;
    int total = 0;
    int bookId[SIZE], quantity[SIZE];
    float price[SIZE];
    string bookName[SIZE], author[SIZE], publisher[SIZE];
    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                if(total < SIZE)
                {
                    cout << "\nEnter Book ID: ";
                    cin >> bookId[total];
                    cin.ignore();
                    cout << "Enter Book Name: ";
                    getline(cin, bookName[total]);
                    cout << "Enter Author Name: ";
                    getline(cin, author[total]);
                    cout << "Enter Publisher: ";
                    getline(cin, publisher[total]);
                    cout << "Enter Price: ";
                    cin >> price[total];
                    cout << "Enter Quantity: ";
                    cin >> quantity[total];
                    total++;
                    cout << "\nBook Added Successfully!\n";
                }
                else
                {
                    cout << "\nLibrary is Full!\n";
                }
                break;
            case 2:
                if(total == 0)
                {
                    cout << "\nNo Books Available!\n";
                }
                else
                {
                    for(int i = 0; i < total; i++)
                    {
                        cout << "\nBook " << i + 1 << endl;
                        cout << "Book ID : " << bookId[i] << endl;
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author : " << author[i] << endl;
                        cout << "Publisher : " << publisher[i] << endl;
                        cout << "Price : " << price[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                    }
                }
                break;
            case 3:
            {
                int id;
                bool found = false;
                cout << "Enter Book ID: ";
                cin >> id;
                for(int i = 0; i < total; i++)
                {
                    if(bookId[i] == id)
                    {
                        cout << "\nBook Found\n";
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author : " << author[i] << endl;
                        cout << "Publisher : " << publisher[i] << endl;
                        cout << "Price : " << price[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Book Not Found!\n";
                break;
            }
            case 4:
            {
                int id;
                bool found = false;
                cout << "Enter Book ID to Update: ";
                cin >> id;
                cin.ignore();
                for(int i = 0; i < total; i++)
                {
                    if(bookId[i] == id)
                    {
                        cout << "Enter New Book Name: ";
                        getline(cin, bookName[i]);
                        cout << "Enter New Author: ";
                        getline(cin, author[i]);
                        cout << "Enter New Publisher: ";
                        getline(cin, publisher[i]);
                        cout << "Enter New Price: ";
                        cin >> price[i];
                        cout << "Enter New Quantity: ";
                        cin >> quantity[i];
                        cout << "\nBook Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Book Not Found!\n";
                break;
            }
            case 5:
            {
                int id;
                bool found = false;
                cout << "Enter Book ID to Delete: ";
                cin >> id;
                for(int i = 0; i < total; i++)
                {
                    if(bookId[i] == id)
                    {
                        for(int j = i; j < total - 1; j++)
                        {
                            bookId[j] = bookId[j + 1];
                            bookName[j] = bookName[j + 1];
                            author[j] = author[j + 1];
                            publisher[j] = publisher[j + 1];
                            price[j] = price[j + 1];
                            quantity[j] = quantity[j + 1];
                        }
                        total--;
                        cout << "\nBook Deleted Successfully!\n";

                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Book Not Found!\n";
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