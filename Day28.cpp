/*
    Author: Aryan Yadav
    Counting Bits
    Complexity: O(n)
    Difficulty: Medium   
*/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        for(int i=0;i<=num;i++){
            v[i] = v[i>>1] + (i & 1);
        }
        return v;
    }
};

/* Easy Solution */
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        for(int i=0;i<=num;i++){
            v[i] = __builtin_popcount(i);
        }
        return v;
    }
};
