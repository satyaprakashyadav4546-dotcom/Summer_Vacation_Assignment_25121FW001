// selection sort
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
    for(int i=0;i<n-1;i++)
    {
    int smallestindex=i;
    for(int j=i+1;j<n;j++)
    {
    if(arr[j]<arr[smallestindex])
    {
    smallestindex=j;
    }
    }
    swap(arr[i],arr[smallestindex]);
    }
    cout<<"sorted array=";
    for(int i=0;i<n;i++)
    {
   cout<<arr[i]<<" ";
    }
    return 0;
}
    