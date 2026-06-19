//transpose of two matrix 
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the number rows of matrix:";
    cin >> n;
    cout<<"enter the number of columns of matrix:";
    cin>>m;
    int arr1[n][m];
    cout << "Enter the elements of matrix2:";
    for(int i=0; i<n;i++)
    {
    for( int j=0;j<m;j++)
    {
    cin>>arr1[i][j];
    }
    }
    int arr2[n][m];
    for( int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    arr2[i][j]=arr1[j][i];
    }
    }
    cout<<"transpose of two matrix";
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
    cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
