//sort words by length 
#include<iostream>
#include<string>
using namespace std;
int main()
{
int n;
cout<<"enter the number of words=";
cin>>n;
string word[n];
cout<<"enter the words=";
for(int i=0;i<n;i++)
{
cin>>word[i];
}
for(int i=0;i<n;i++)
{
for( int j=i+1;j<n;j++)
{
if(word[i].length()>word[j].length())
{
swap(word[i],word[j]);
}
}
}
cout<<"sorted word:";
for(int i=0;i<n;i++)
{
cout<<word[i]<<" ";
}
    return 0;
}
    