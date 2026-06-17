//to find common elements
#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"range of arr1=";
cin>>n;
cout<<"enter the range of arr2=";
cin>>m;
int arr1[n];
cout<<"element of arr1=";
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
int arr2[m];
cout<<"enter the element of arr2=";
for(int i=0;i<m;i++)
{
cin>>arr2[i];
}
cout<<"common elements=";
for(int i=0;i<n;i++)
{
bool common=false;
for(int j=0;j<m;j++)
{
if(arr1[i]==arr2[j])
{
common=true;
break;
}
}
if(common==true)
{
cout<<arr1[i]<<" ";
}
}
    return 0;
}