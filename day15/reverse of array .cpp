// reverse of array 
#include<iostream>
using namespace std;

int main()
{
    int n,count;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   count=n;
    for( int i=0;i<n/2;i++)
    {
    count--;
    swap(arr[count],arr[i]);
    }
    cout << "Array after reverse:";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
