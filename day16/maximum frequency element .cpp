// maximum frequency element 
#include<iostream>
using namespace std;
int main()
{
int n,maxelement,maxfrequency=0,count;
cout<<"enter the number of elements=";
cin>>n;
int arr[n];
cout<<"enter the elements=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
count=0;
for(int j=0;j<n;j++)
{
if(arr[i]==arr[j])
{
count++;
}
if(count>maxfrequency)
{
maxfrequency=count;
maxelement=arr[i];
}
}
}
cout<<"max element="<<maxelement<<endl<<"max frequency="<<maxfrequency;
return 0;
}