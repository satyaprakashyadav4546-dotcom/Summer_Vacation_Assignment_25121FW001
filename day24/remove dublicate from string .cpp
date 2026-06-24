//remove dublicate from string 
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str,longest="",temp="";
cout<<"enter the str=";
getline(cin,str);
for(int i=0;i<str.size();i++)
{
for(int j=i+1;j<str.size();j++)
{
if(str[i]==str[j])
{
str.erase(j,1);
j--;
}
}
}
for(int i=0;i<str.size();i++)
{
cout<<str[i];
}
    return 0;
}
