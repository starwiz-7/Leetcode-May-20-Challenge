/*
    Author: Aryan Yadav
    Maximum Sum Circular Subarray

    Complexity:O(n)
    Algorithm: Kadane's Algorithm
    Difficulty: Medium
*/

using namespace std;
class Solution
{
public:
    int kadane(vector<int> &a)
    {
        int msf = 0;
        int me = -1e9;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            msf += a[i];
            if (msf > me)
                me = msf;
            if (msf < 0)
                msf = 0;
        }
        return me;
    }
    int maxSubarraySumCircular(vector<int> &a)
    {
        int sum1 = kadane(a);
        int wrap = 0;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            wrap += a[i];
            a[i] *= -1;
        }
        wrap += kadane(a);
        if (sum1 < 0 && wrap == 0)
            wrap = sum1;
        return max(sum1, wrap);
    }
};