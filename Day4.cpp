/*
    Author: Aryan Yadav
    Number Complement

    Complexity: O(n)
    Algorithm: NA
    Difficulty: Easy

*/
using namespace std;
class Solution
{
public:
    int findComplement(long long num)
    {
        vector<long long> binary;
        while (num > 0)
        {
            binary.push_back(num % 2);
            num /= 2;
        }
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == 0)
                binary[i] = 1;
            else
                binary[i] = 0;
        }
        long long val = 0;
        long long base = 1;
        for (int i = 0; i < binary.size(); i++)
        {
            val += binary[i] * base;
            base = base * 2;
        }
        return val;
    }
};