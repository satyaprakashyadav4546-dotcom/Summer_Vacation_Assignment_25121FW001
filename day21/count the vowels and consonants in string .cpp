// count tne vowels and consonants in string
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter the string=";
getline(cin,str);
int n=str.length();
int vowels=0,consonant=0;
for(int i=0;i<n;i++)
{
if((str[i]=='a')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='e')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
{
vowels++;
}
else{
consonant++;
}
}
cout<<"vowels="<<vowels<<endl;
cout<<"consonant="<<consonant;
    return 0;
}