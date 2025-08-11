#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> mat;
    int row; cin>>row;
    int col; cin>>col;
    for(int i = 0; i < row; i++)
    {
        vector<int> row;
        for(int j = 0; j < col; j++)
        {
            int val; cin>>val;
            row.push_back(val);
        }
        mat.push_back(row);
    }
    for(auto row : mat)
    {
        for(auto col : row)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}