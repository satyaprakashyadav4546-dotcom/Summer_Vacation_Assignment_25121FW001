//common character 
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1,str2;
cout<<"enter the str=";
getline(cin,str1);
cout<<"enter the str2=";
getline(cin,str2);
for(int i=0;i<str1.size();i++)
{
int count=0;
bool printed=false;
for(int k=0;k<i;k++)
{
if(str1[i]==str1[k])
{
printed=true;
break;
}
}
if(printed)
{
continue;
}
for(int j=0;j<str2.size();j++)
{
if(str1[i]==str2[j])
{
count++;
}
}
if(count>0)
{
cout<<str1[i]<<" ";
}
}
    return 0;
}
    