//to find words in string
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter the string=";
getline(cin,str);
int n=str.size();
int count=0;
for(int i=0;i<n;i++)
{
if(str[i]!=' '&&(i==0||str[i-1]==' '))
{
count++;
}
}
cout<<"words in sentence is=";
cout<<count;
    return 0;
}