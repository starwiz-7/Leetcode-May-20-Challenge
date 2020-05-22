/*
    Author: Aryan Yadav
    Sort Characters By Frequency
    
    Algorithm: Hashing
    Difficulty: Easy   
*/

using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        vector<pair<int, char>> v;
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        for(auto i: m){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end());
        int n = v.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<v[i].first;j++){
                ans+=v[i].second;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
