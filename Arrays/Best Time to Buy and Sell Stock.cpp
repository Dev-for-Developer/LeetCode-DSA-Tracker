class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX; 
        int maxDiff = 0;
        for(int i = 0; i < n; i++)
        {
            if(minPrice > prices[i])
            {
                minPrice = prices[i];
            }
            if(maxDiff < prices[i] - minPrice)
            {
                maxDiff = prices[i] - minPrice;
            }
        }
        return maxDiff;
    }
};