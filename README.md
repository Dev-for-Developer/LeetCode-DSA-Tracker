# LeetCode-DSA-Tracker
# 📘 LeetCode 30-Day Challenge Tracker

Hi! I'm DEV SHARMA, a B.Tech CSE student on a mission to master DSA 💻.  
This repo contains my daily LeetCode submissions, notes, and topic-wise practice.

## 🚀 Stats
- 👨‍💻 Problems Solved: 100+
- 💪 Topics: Arrays, HashMaps, Recursion, Trees, Graphs
- 📅 Challenge: 30 Days of LeetCode – June 2025

## 🔖 Topics Covered
- ✅ Arrays
- ✅ Strings
- ✅ Hashmaps
- ✅ Sliding Window
- ⏳ Trees, Recursion (Ongoing)

## 📝 Sample Submission

### Day 3: Maximum Subarray (Kadane's Algo)
```cpp
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = 0;
    for(int n : nums) {
        currSum = max(n, currSum + n);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
