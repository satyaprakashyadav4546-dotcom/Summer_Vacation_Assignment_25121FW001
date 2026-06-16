// to remove dublicate from array
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the range of array=";
cin>>n;
int arr[n];
cout<<"Enter the elements of array=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int temp[n];
int size=0;
for(int i=0;i<n;i++)
{
bool duplicate=false;
for(int j=0;j<size;j++)
{
if(arr[i]==temp[j])
{
duplicate=true;
break;
}
}
if(!duplicate)
{
temp[size]=arr[i];
size++;
}
}
cout<<"Array after removing duplicates: ";
for(int i=0;i<size;i++)
{
cout<<temp[i]<<" ";
}
return 0;
}