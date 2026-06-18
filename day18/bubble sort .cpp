// bubble sort
#include<iostream>
using namespace std;
int main()
{
    int temp=0,n;
    cout<<"enter the number of elements=";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array=";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n-i-1;j++)
    {
    if(arr[j]>arr[j+1])
    {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    }
    }
    cout<<"sorted array=";
    for(int i=0;i<n;i++)
    {
   cout<<arr[i]<<" ";
    }
    return 0;
}
    