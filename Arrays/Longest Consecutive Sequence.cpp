class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set;
        for (int it : nums) {
            set.insert(it);
        }
        int maxCount = 0;
        for (auto num : set) {
            if (set.find(num - 1) == set.end())
            {
                    int current = num;
                    int count = 1;

                    while (set.find(current + 1) != set.end()) {
                        current++;
                        count++;
                    }
                    maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};
