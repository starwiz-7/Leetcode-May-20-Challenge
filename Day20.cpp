/*
    Author: Aryan Yadav
    Maximum Sum Circular Subarray
    Complexity:O(n)
    Algorithm: Inorder Traversal
    Difficulty: Medium
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
using namespace std;
class Solution {
public:
    void traverse(TreeNode* root, int &k, vector<TreeNode*> &l){
        if(root->left){
            traverse(root->left,k,l);
        }
        k-=1;
        if(k>=0){
            l[k] = root;
        }else{
            return;
        }
        if(root->right){
            traverse(root->right,k,l);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*>l(k,NULL);
        traverse(root,k,l);
        return l[0]->val;
    }
};
