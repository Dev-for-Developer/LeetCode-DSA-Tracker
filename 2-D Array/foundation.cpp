#include<iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int row; cin >> row;
    int column; cin >> column;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" - ";
        }
        cout<<endl;
    }
}