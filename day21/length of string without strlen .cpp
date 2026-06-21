// length of string without strlen
#include<iostream>
using namespace std;
int main()
{
char str[]="I am Satya";
int len=0;
for(int i=0;i<str[i]!='\0';i++)
{
len++;
}
cout<<"length of string="<<len;
return 0;
}