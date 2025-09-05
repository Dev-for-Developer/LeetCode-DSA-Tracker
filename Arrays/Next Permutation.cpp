class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        // 1) find pivot
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;
        if (i < 0) { // whole array is non-increasing
            reverse(nums.begin(), nums.end());
            return;
        }
        // 2) find rightmost successor greater than nums[i]
        int j = n - 1;
        while (nums[j] <= nums[i]) j--;
        // 3) swap and reverse suffix
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
    }
};
