class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.reserve(numRows);
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1, 1); // create row of size i+1 filled with 1s
            for (int j = 1; j < i;
                 ++j) // compute inner values from previous row
                row[j] = res[i - 1][j - 1] + res[i - 1][j];
            res.push_back(std::move(row));
        }
        return res;
    }
};