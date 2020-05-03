/*
    Author: Aryan Yadav
    Jewels and Stones

    Complexity:O(n)
    Algorithm: NA
    Difficulty: Easy
*/
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int a[256] = {0};
        for (int i = 0; i < J.length(); i++)
        {
            a[J[i]]++;
        }
        int count = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (a[S[i]] != 0)
            {
                count++;
            }
        }
        return count;
    }
};
