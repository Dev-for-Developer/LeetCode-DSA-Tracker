🚀 LeetCode DSA Tracker – 30-Day Challenge
Hi, I'm Dev Sharma, a B.Tech CSE student passionate about mastering Data Structures and Algorithms (DSA).
This repository documents my daily progress solving LeetCode problems, along with notes and topic-wise practice for deeper understanding.

📊 Progress Summary
🔢 Total Problems Solved: 100+

🧠 Core Topics: Arrays, Strings, HashMaps, Recursion, Trees, Graphs

📅 Challenge Timeline: 30 Days of LeetCode – June 2025

📂 What You'll Find in This Repo
✅ Daily LeetCode Submissions (with code and explanations)

🗂️ Topic-wise Categorized Problems

🧾 Personal Notes and Observations

🔍 Optimized & Brute Force Approaches (where applicable)

📈 Performance and edge-case analysis

🧠 Topics Covered (So Far)
Topic	Status	Notes
Arrays	✅ Done	✔️ Includes 2-pointer, Kadane’s, etc.
Strings	✅ Done	✔️ Covers palindrome, anagram, etc.
HashMaps	✅ Done	✔️ Frequency, uniqueness, etc.
Sliding Window	✅ Done	✔️ Includes fixed and variable size
Recursion	🔄 Ongoing	⏳ Backtracking problems included
Trees	🔄 Ongoing	⏳ DFS/BFS, Binary Trees, BST

📌 Sample Submission
🔹 Day 3 – Maximum Subarray (Kadane's Algorithm)
cpp
Copy
Edit
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = 0;
    for(int n : nums) {
        currSum = max(n, currSum + n);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
📌 Concept: This uses Kadane’s Algorithm to find the maximum sum subarray in linear time (O(n)).

🧭 Roadmap Ahead
 Recursion: Backtracking, Permutations, Subsets

 Trees: Binary Tree Traversals, BST Operations

 Graphs: BFS, DFS, Union-Find, Topo Sort

 Dynamic Programming

 Linked Lists and Stack/Queue Problems

📒 How to Use This Repo
Browse by Day folders or Topic tags

Read code with comments to understand logic

Use notes as quick revision material

Clone the repo and practice the problems yourself!

🌟 Let's Connect
🧑‍💻 LeetCode Profile: hey_devsharma

📫 Email: devsh8126@gmail.com

💬 LinkedIn: https://www.linkedin.com/in/dev-sharma-44b666298/

If you find this helpful, feel free to ⭐️ star this repo.
Let’s keep grinding 💪 — one problem at a time.
