// frequency of character 
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
cout<<"frequency of character=";
for(int i=0;i<n;i++)
{
int count=0;
if(str[i]==' ')
{
continue;
}
bool printed=false;
for(int k=0;k<i;k++)
{
if(str[i]==str[k])
{
printed=true;
break;
}
}
if(printed==true){
continue;
}
for(int j=0;j<n;j++)
{
if(str[i]==str[j])
{
count++;
}
}
cout<<str[i]<<"="<<count<<endl;
}
    return 0;
}