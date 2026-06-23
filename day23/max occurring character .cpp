// max occurring character 
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
int max=INT_MIN;
char maxchar;
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
if(count>max)
{
max=count;
maxchar=str[i];
}
}
cout<<"maximum occurring character="<<maxchar;
    return 0;
}