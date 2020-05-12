/*
    Author: Aryan Yadav
    Find the Town Judge

    Complexity:O(n)
    Algorithm: NA
    Difficulty: Hard   
*/

class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        vector<int> isS(N + 1, -1);
        map<int, set<int>> tms;
        for (const vector<int> t : trust)
        {
            isS[t[0]] = 1;
            if (0 == tms.count(t[1]))
                tms[t[1]] = set<int>({t[0]});
            else
                tms[t[1]].insert(t[0]);
        }
        for (int ni = 1; ni <= N; ++ni)
        {
            if (0 < isS[ni])
                continue;
            if (N - 1 == tms[ni].size())
                return ni;
        }
        return -1;
    }
};