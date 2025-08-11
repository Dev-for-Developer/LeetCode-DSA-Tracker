#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v, int l, int m, int r, vector<int> &temp)
{
    int i = l;
    int j = m + 1;
    int k = l;

    while(i <= m && j <= r)
    {
        if(v[i] <= v[j])
        {
            temp[k++] = v[i++];
        }
        else
        {
            temp[k++] = v[j++];
        }
    }

    while(i <= m)
    {
        temp[k++] = v[i++];
    }
    while(j <= r)
    {
        temp[k++] = v[j++];
    }

    for(k = l; k <= r; k++)
    {
        v[k] = temp[k];
    }
}
void mergeSortRec(vector<int> &v, int l, int r, vector<int> &temp)
{
    if(l >= r) return;

    int m = l + (r - l) / 2;

    mergeSortRec(v, l , m , temp);
    mergeSortRec(v ,m + 1, r, temp);
    
    if(v[m] <= v[m + 1]) return;

    merge(v, l, m , r , temp);

}
void mergeSort(vector<int> &v)
{
    int n = v.size();
    if(n <= 1) return;
    vector<int> temp(n);
    mergeSortRec(v, 0, n-1, temp);
}
int main()
{
    vector<int> v;
    int x;
    while(cin>>x && x != -1)
    {
        v.push_back(x);
    }
    mergeSort(v);
    for(auto i : v)
    {
        cout<<i<<" -> ";
    }
}