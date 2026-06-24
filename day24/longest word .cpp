//longest word 
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str,longest="",temp="";
int max=INT_MIN;
cout<<"enter the str=";
getline(cin,str);
int n=str.size();
for(int i=0;i<n;i++)
{
if(str[i]!=' '&&i!=str.length())
{
temp+=str[i];
}
else{
if(temp.length()>longest.length())
{
longest=temp;
}
temp="";
}
}
cout<<"longest word="<<longest;
    return 0;
}