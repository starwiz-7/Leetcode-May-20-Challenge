/*
    Author: Aryan Yadav
    First Bad Version

    Complexity: O(logn)
    Algorithm: Binary Search
    Difficulty: Easy
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1;
        int last = n;
        int mid = (start + (last - start) / 2);
        while (start <= last)
        {
            if (isBadVersion(mid))
                last = mid - 1;
            else
                start = mid + 1;
            mid = (start + (last - start) / 2);
        }
        return isBadVersion(start) ? start : start + 1;
    }
};
