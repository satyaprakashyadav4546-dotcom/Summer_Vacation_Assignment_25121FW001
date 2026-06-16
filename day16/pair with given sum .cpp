//pair with given sum
#include<iostream>
using namespace std;
int main()
{
int n,sum,found=0;
cout<<"enter the number of elements=";
cin>>n;
int arr[n];
cout<<"enter the elements=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the sum=";
cin>>sum;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]+arr[j]==sum)
{
found++;
cout<<"pair="<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
}
}
}
if(found==0)
{
cout<<"pair not found";
}
return 0;
}