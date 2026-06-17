// intersection of elements 
#include<iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int m )
{
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(arr1[i]==arr2[j])
{
cout<<arr1[i]<<" ";
}
}
}
return -1;
}
int main()
{
int n,m;
cout<<"enter the range of array1=";
cin>>n;
int arr1[n];
cout<<"enter the element of array=";
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
cout<<"enter the range of array2=";
cin>>m;
int arr2[m];
cout<<"enter the element of array2=";
for(int i=0;i<m;i++)
{
cin>>arr2[i];
}
cout<<"intersection of elements are=";
intersection(arr1,arr2,n,m);
return 0;
}
