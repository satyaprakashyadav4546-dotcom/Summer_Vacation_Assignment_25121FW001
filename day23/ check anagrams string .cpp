// to check strings are anagrams or not
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1,str2;
cout<<"enter the str1=";
getline(cin,str1);
cout<<"enter the str2=";
getline(cin,str2);
sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());
if(str1.length()!=str2.length())
{
cout<<"not anagrams";
return 0;
}
if(str1==str2)
{
cout<<"anagrams";
}
else
{
cout<<"not anagrams";
}
    return 0;
}