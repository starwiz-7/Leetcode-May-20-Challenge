/*
    Author: Aryan Yadav
    Contiguous Array
    
    Algorithm: Two pointer
    Difficulty: Medium
*/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        int sum = 0;
        int max_len = 0;
        int end_ind = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == 0)
                nums[i] = -1;
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum == 0){
                max_len = i+1;
                end_ind = i;
            }
            if(m.find(sum+n) != m.end()){
                if(max_len<i - m[sum+n]){
                    max_len = i - m[sum+n];
                    end_ind = i;
                }
            }
            else
                m[sum+n] = i;
        }
        return max_len;
    }
};
