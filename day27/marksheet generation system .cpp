#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int roll;
    float m1,m2,m3,m4,m5,total,percentage;
    cout<<"Enter Student Name: ";
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll;
    cout<<"Enter Marks of 5 Subjects: ";
    cin>>m1>>m2>>m3>>m4>>m5;
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    cout<<"\n------ Marksheet ------"<<endl;
    cout<<"Name       : "<<name<<endl;
    cout<<"Roll No    : "<<roll<<endl;
    cout<<"Total      : "<<total<<endl;
    cout<<"Percentage : "<<percentage<<"%"<<endl;
    if(percentage>=90)
        cout<<"Grade : A";
    else if(percentage>=75)
        cout<<"Grade : B";
    else if(percentage>=60)
        cout<<"Grade : C";
    else if(percentage>=40)
        cout<<"Grade : D";
    else
        cout<<"Grade : Fail";
    return 0;
}