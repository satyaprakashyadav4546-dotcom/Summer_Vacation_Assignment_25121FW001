// to check strings are anagrams or not
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter the str=";
getline(cin,str);
int n=str.size();
//left rotated string 
int temp=str[0];
for(int i=0;i<n;i++)
{
str[i]=str[i+1];
}
str[n-1]=temp;
cout<<"left rotaded string=";
for(int i=0;i<n;i++)
{
cout<<str[i]<<" ";
}
    return 0;
}