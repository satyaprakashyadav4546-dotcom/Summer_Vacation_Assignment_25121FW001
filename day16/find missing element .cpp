// find missing element 
#include<iostream>
using namespace std;
int main()
{
    int n,a,index,count,target;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    cout<<"enter the target element=";
    cin>>a;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==a)
    {
    index=i;
    cout<<index;
    break;
    }
    }
    return 0;
}
