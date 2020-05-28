/*
    Author: Aryan Yadav
    Possible Bipartition

    Algorithm: DFS
    Difficulty: Hard   
*/

class Solution {
public:
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        g = vector<vector<int>>(N);
        for( const auto& d:dislikes){
            g[d[0] -1].push_back(d[1]-1);
            g[d[1] -1].push_back(d[0]-1);
        }
        colors = vector<int>(N,0);
        for(int i=0;i<N;i++){
            if(colors[i] == 0 && !dfs(i,1))
                return false;
        }
        return true;
    }
private:
    vector<vector<int>>g;
    vector<int>colors;
    bool dfs(int cur, int color){
        colors[cur] = color;
        for(int nxt:g[cur]){
            if (colors[nxt] == color)
                return false;
            if(colors[nxt] == 0 && !dfs(nxt, -color))
                return false;
        }
        return true;
    }
};
