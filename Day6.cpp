/*
    Author: Aryan Yadav
    Majority Element

    Complexity: O(n)
    Algorithm: NA
    Difficulty: Easy
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int k = floor(nums.size() / 2);
        int cnt = 0;
        int ans;
        int prev = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == prev)
            {
                cnt++;
                if (cnt == k)
                {
                    ans = nums[i];
                    break;
                }
            }
            else
            {
                prev = nums[i];
                cnt = 0;
            }
        }
        if (nums.size() == 1)
        {
            ans = nums[0];
        }
        return ans;
    }
};