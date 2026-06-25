// merge two sorted array
#include<iostream>
#include<algorithm>
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
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    int arr2[m];
    cout<<"enter the element of arr2=";
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int arr3[n+m];
    for(int i=0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0; i<m; i++)
    {
        arr3[n+i]=arr2[i];
    }
    sort(arr3,arr3+m+n);
    cout<<"merge array=";
    for(int i=0; i<n+m; i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}