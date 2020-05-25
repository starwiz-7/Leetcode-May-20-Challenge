/*
    Author: Aryan Yadav
    Uncrossed Lines
    
    Algorithm: Dynamic Programming(Memoization)
    Difficulty: Hard   
*/

using namespace std;
class Solution {
public:
    int solution(int i, int j, vector <int>&A, vector <int>&B, vector <vector <int> >& dp){
      if(i >= A.size()) return 0;
      if(j >= B.size()) return 0;
      if(dp[i][j] != -1) return dp[i][j];
      int nj = j;
      while(nj < B.size() && B[nj] != A[i]) nj++;
      int ret = max(solution(i + 1, j, A, B, dp), (nj < B.size() ? 1 :
      0) + solution(i + 1, nj + 1, A, B, dp));
      return dp[i][j] = ret;
    }
    
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solution(0,0,A,B,dp);
    }
};
