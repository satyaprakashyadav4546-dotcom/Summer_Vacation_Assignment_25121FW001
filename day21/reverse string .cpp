// reverse string
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str="Satya prakash yadav";
int n=str.length();
string ans="";
reverse(str.begin(),str.end());
for(int i=0;i<n;i++)
{
string word=" ";
while(i<n&& str [i]!=' ')
{
word+=str[i];
i++;
}
reverse(word.begin(),word.end());
if(word.length()>0)
{
ans+=" "+word;
}
}
cout<<ans.substr(1);
return 0;
}