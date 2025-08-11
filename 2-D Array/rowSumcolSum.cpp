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
    vector<int> rowSum; 
    vector<int> colSum; 
    int sum = 0;
    for(int i = 0; i < row; i++)
    {
        sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum += mat[i][j];
        }
        rowSum.push_back(sum);
    }
    for(int i = 0; i < col; i++)
    {
        sum = 0;
        for(int j = 0 ; j < row; j++)
        {
            sum += mat[j][i];
        }
        colSum.push_back(sum);
    }
    for(auto val : rowSum)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto val : colSum)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}