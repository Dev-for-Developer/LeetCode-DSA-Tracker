class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 2 == 0)
            {
                mp[nums[i]]++;
            }
        }
        int maxFreq = 0; int value = 0;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(maxFreq == it -> second && it -> first < value)
            {
                value = it -> first;
            }
            if(maxFreq < it -> second)
            {
                maxFreq = it -> second;
                value = it -> first;
            }
        }
        if(mp.empty())
        {
            return -1;
        }
        else
        {
            return value;
        }
    }
};