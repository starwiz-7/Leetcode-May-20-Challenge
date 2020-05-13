/*
    Author: Aryan Yadav
    Remove K Digits

    Complexity: O(n)
    Algorithm: NA
    Difficulty: Medium
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string result = "";

        minnum(num, k, result);
        result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));
        if (result.length() == 0)
            result.push_back('0');
        return result;
    }

    void minnum(string num, int k, string &result)
    {
        if (k == 0)
        {
            result.append(num);
            return;
        }
        int len = num.length();
        if (len <= k)
        {
            return;
        }

        int min = 0;
        for (int i = 1; i <= k; i++)
        {
            if (num[i] < num[min])
                min = i;
        }
        result.push_back(num[min]);
        string new_str = num.substr(min + 1, len - min);
        minnum(new_str, k - min, result);
    }
};