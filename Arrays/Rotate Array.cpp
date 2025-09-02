class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        if (k == 0)
            return;
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        i = 0;
        j = k - 1;
        while (i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        i = k;
        j = n - 1;
        while (i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
};
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> res;
        if (k == 0)
        {
            return;
        }
        int n = nums.size();
        k = k % n;
        for (int i = 0; i < n - k; i++)
        {
            res.push_back(nums[i]);
        }
        for (int i = 0; i < k; i++)
        {
            nums[i] = nums[i + n - k];
        }
        for (int i = 0; i < n - k; i++)
        {
            nums[i + k] = res[i];
        }
    }
};
