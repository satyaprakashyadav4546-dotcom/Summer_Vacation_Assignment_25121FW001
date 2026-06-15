#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    // Move non-zero elements to the front
    for(int i = 0; i < n; i++)
    {
    if(arr[i] != 0)
    {
    arr[index] = arr[i];
    index++;
    }
    }
    // Fill remaining positions with zeros
    while(index < n)
    {
     arr[index] = 0;
     index++;
    }
    cout << "Array after moving zeros to end: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
