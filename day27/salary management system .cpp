#include <iostream>
using namespace std;
int main()
{
    float basic,hra,da,gross;
    cout<<"Enter Basic Salary: ";
    cin>>basic;
    hra=basic*0.20;
    da=basic*0.10;
    gross=basic+hra+da;
    cout<<"HRA = "<<hra<<endl;
    cout<<"DA = "<<da<<endl;
    cout<<"Gross Salary = "<<gross<<endl;
    return 0;
}