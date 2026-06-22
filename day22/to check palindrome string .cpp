//to check pallindrome or not
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
string str;
cout<<"enter the string=";
getline(cin,str);
int n=str.size();
int st=0,end=n-1;
bool palindrome=true;
while(st<end)
{
if(str[st]==' ')
{
st++;
continue;
}
if(str[end]==' ')
{
end--;
continue;
}
if(tolower(str[st])!=tolower(str[end]))
{
palindrome=false;
break;
}
end--;
st++;
}
if(palindrome)
{
cout<<"ispalindrome";
}
else
{
cout<<"notpalindrome";
}
    return 0;
}