//to convert lowercase to uppercase using ASCII value
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter the string=";
getline(cin,str);
int n=str.length();
for(int i=0;i<n;i++)
{
if(str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;//ASCII value difference between a and A is 32
}
}
cout<<"uppercase="<<str;
    return 0;
}