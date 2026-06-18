// binary search 
#include<iostream>
using namespace std;
int main()
{
int n,target;
cout<<"range of array=";
cin>>n;
int arr[n];
cout<<"enter the element=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the target element=";
cin>>target;
int start=0;
int end=n-1;
cout<<"the target element at index=";
while(start<=end)
{
int mid=start+(end-start)/2;
if(arr[mid]==target)
{
cout<<mid;
break;
}
else if(arr[mid]<target)
{
start=mid+1;
}
else
{
end=mid-1;
}
}
return 0;
}