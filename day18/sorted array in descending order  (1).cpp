// sorted array in descending order 
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter range of array=";
cin>>n;
int arr[n];
cout<<"enter element of array=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
swap(arr[i],arr[j]);
}
}
}
cout<<"sorted array in decending order=";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}