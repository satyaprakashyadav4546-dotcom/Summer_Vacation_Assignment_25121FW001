//row wise sum 
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
cout<<"row wise sum=";
for(int i=0;i<n;i++)
{
int sum=0;
for(int j=0;j<m;j++)
{
sum+=mat[i][j];
}
cout<<sum<<endl;
}
    return 0;
}