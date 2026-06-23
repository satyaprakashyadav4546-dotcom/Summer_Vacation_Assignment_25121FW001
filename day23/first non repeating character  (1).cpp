//first non repeating character 
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
string str;
bool found=false;
cout<<"enter the string=";
getline(cin,str);
int n=str.size();
for(int i=0;i<n;i++)
{
int count=0;
if(str[i]==' ')
{
continue;
}
for(int j=0;j<n;j++)
{
if(str[i]==str[j])
{
count++;
}
}
if(count==1)
{
cout<<"first non repeating character="<<str[i];
found=true;
break;
}
}
if(!found)
{
cout<<"no non repeating character";
}
    return 0;
}