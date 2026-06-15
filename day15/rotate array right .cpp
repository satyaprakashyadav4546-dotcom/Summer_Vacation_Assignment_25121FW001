// rotate the array right
#include<iostream>
using namespace std;
int main()
{
int n,temp,r;
cout<<"enter the number of elements=";
cin>>n;
int arr[n];
cout<<"enter the elements=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the times to rotate=";
cin>>r;
for(int k=1;k<=r;k++)
{
temp=arr[n-1];
for(int i=n-1;i>=0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
}
cout<<"left rotated array=";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}