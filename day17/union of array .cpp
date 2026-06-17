// union of array 
#include<iostream>
using namespace std;
int main()
{
int n,j,i,m;
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
cout<<"union of array=";
//print the all element of array1
for(int i=0;i<n;i++)
{
cout<<arr1[i]<<" ";
}
// print the element which is not in arr1
for(int i=0;i<m;i++)
{
bool common=false;
for(int j=0;j<n;j++)
{
if(arr1[j]==arr2[i])
{
common=true;
break;
}
}
if(common==false)
{
cout<<arr2[i]<<" ";
}
}
    return 0;
}