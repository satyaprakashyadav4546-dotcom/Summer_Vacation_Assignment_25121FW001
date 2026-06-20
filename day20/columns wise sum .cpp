//columns wise sum 
#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"enter the no. of row=";
cin>>n;
cout<<"enter the no. of columns=";
cin>>m;
int mat[n][m];
cout<<"enter the element of mat=";
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>mat[i][j];
}
}
cout<<"columns wise sum=";
for(int i=0;i<m;i++)
{
int sum=0;
for(int j=0;j<n;j++)
{
sum+=mat[j][i];
}
cout<<sum<<endl;
}
    return 0;
}