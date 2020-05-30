/*
    Author: Aryan Yadav
    K Closest Points to Origin
    Difficulty: Medium
*/

class Solution {
    private:
    bool farther(vector<int>& p,vector<int>& q){
        return p[0]*p[0]+p[1]*p[1]>q[0]*q[0]+q[1]*q[1];
    }
    bool closer(vector<int>& p,vector<int>& q){
        return p[0]*p[0]+p[1]*p[1]<q[0]*q[0]+q[1]*q[1];
    }
    int partition(vector<vector<int>>& points,int left,int right){
        int pivot=left,l=left+1,r=right;
        while(l<=r){
            if(farther(points[l],points[pivot]) && closer(points[r],points[pivot]))
                swap(points[l++],points[r--]);
            if(!farther(points[l],points[pivot])) l++;
            if(!closer(points[r],points[pivot])) r--;
        }
        swap(points[pivot], points[r]);
        return r;
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int l=0,r = points.size()-1;
        while(true){
            int p = partition(points,l,r);
            if(p == k-1) break;
            if(p<k-1) l = p+1;
            else r = p-1;
        }
        return vector<vector<int>>(points.begin(), points.begin()+k);
    }
};
