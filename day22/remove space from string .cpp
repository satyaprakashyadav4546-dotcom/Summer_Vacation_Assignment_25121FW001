//remove space from string
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter the string=";
getline(cin,str);
int n=str.size();
cout<<"string without space=";
for(int i=0;i<n;i++)
{
if(str[i]!=' ')
{
cout<<str[i];
}
}
    return 0;
}