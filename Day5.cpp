/*
    Author: Aryan Yadav
    First Unique Charachter in a String

    Complexity:O(n)
    Algorithm: HashMap Implementation
    Difficulty: Easy
*/
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        pair<long long, long long> a[256];
        for (long long i = 0; i < s.length(); i++)
        {
            (a[s[i]].first)++;
            (a[s[i]].second) = i;
        }
        long long res = 1e9;
        for (int i = 0; i < 256; i++)
        {
            if (a[i].first == 1)
            {
                res = min(res, a[i].second);
            }
        }
        if (res == 1e9)
        {
            return -1;
        }
        return res;
    }
};