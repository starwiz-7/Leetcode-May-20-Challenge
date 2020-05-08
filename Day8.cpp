/*
    Author: Aryan Yadav
    Check If It Is a Straight Line

    Complexity:O(N)
    Algorithm: NA
    Difficulty: Easy    
*/

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &v)
    {
        if (v.size() == 2)
            return true;
        float slope_check;
        float d = v[1][0] - v[0][0];
        if (d == 0)
            slope_check = 90;
        else
        {
            slope_check = ((v[1][1] - v[0][1]) / d);
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            float slope;
            float dd = v[i + 1][0] - v[i][0];
            if (dd == 0)
                slope = 90;
            else
            {
                slope = ((v[i + 1][1] - v[i][1]) / dd);
            }

            if (slope != slope_check)
                return false;
        }
        return true;
    }
};