//diagonalsum of two matrix 
#include<iostream>
using namespace std;
int main()
{
    int n,m,diagonalsum=0;
    cout << "Enter the number rows of matrix:";
    cin >> n;
    cout<<"enter the number of columns of matrix:";
    cin>>m;
    int arr[n][m];
    cout << "Enter the elements of matrix:";
    for(int i=0; i<n;i++)
    {
    for( int j=0;j<m;j++)
    {
    cin>>arr[i][j];
    }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    if(i==j)
    {
    diagonalsum+=arr[i][j];
    }
    }
    }
    cout<<"diagonal sum="<<diagonalsum;
    return 0;
}
