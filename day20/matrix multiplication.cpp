//matrix multiplication 
#include<iostream>
using namespace std;
int main()
{
int i,j,k,mat1[3][3],mat2[3][3],mat3[3][3]={0};
cout<<"enter the element of mat1=";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>mat1[i][j];
}
}
cout<<"enter the element of mat2=";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>mat2[i][j];
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
for(int k=0;k<3;k++)
{
mat3[i][j]+=mat1[i][k]*mat2[k][j];
}
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<mat3[i][j];
}
cout<<endl;
}
    return 0;
}