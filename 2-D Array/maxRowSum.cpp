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
    int sum = 0; int maxSum = 0; int index = 0;
    for(int i = 0; i < row; i++)
    {
        sum = 0; 
        for(int j = 0; j < col; j++)
        {
            sum += mat[i][j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }
    cout<<maxSum<<endl;
    cout<<index<<endl;
}