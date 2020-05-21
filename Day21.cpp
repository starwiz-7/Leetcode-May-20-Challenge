/*
    Author: Aryan Yadav
    Count Square Submatrices with All Ones
    
    Algorithm: NA
    Difficulty: Hard  
*/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0;
        int n = matrix.size();
        int s = matrix[0].size();
        for(int i=0;i<s;i++){
            ans+=matrix[n-1][i];
        }
        for(int i=0;i<n;i++){
            ans+=matrix[i][s-1];
        }
        ans -= matrix[n-1][s-1];
        for(int i=n-2;i>=0;i--){
            for(int j=s-2;j>=0;j--){
                matrix[i][j] = matrix[i][j] == 1? 1 + min({matrix[i+1][j+1],matrix[i] [j+1],matrix[i+1][j]}) : 0;
                ans+=matrix[i][j];
            }
        }
        return ans;
    }
};
