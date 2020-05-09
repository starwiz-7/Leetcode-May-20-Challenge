/*
    Author: Aryan Yadav
    Valid Perfect Square

    Complexity:O(n)
    Algorithm: NA
    Difficulty: Easy
*/

//Note: Do not use any built-in library function such as sqrt.
class Solution
{
public:
    bool isPerfectSquare(long long num)
    {
        for (long long i = 1; i * i <= num; i++)
        {
            if ((num % i == 0) && (num / i == i))
            {
                return true;
            }
        }
        return false;
    }
};