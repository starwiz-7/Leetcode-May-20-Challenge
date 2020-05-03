/*
    Author: Aryan Yadav
    Ransom Note

    Complexity: O(n)
    Algorithm: Hashing
    Difficulty: Easy
*/
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int a[256] = {0};
        for (int i = 0; i < ransomNote.length(); i++)
        {
            a[ransomNote[i]]++;
        }
        for (int i = 0; i < magazine.length(); i++)
        {
            a[magazine[i]]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (a[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
};