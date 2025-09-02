class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s; int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        for(int i = 0; i < n; i++)
        {
            nums.pop_back();
        }
        for(auto it : s){
            nums.push_back(it);
        }
        return s.size();
    }
};
