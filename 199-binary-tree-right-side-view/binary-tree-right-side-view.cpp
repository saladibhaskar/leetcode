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
class Solution {
public:
    void bombit(TreeNode*root,vector<int>&v,int lv)
 {
     if(root!=NULL){
     if(v.size()==lv)
     {
         v.push_back(root->val);
     }
     
     bombit(root->right,v,lv+1);
     bombit(root->left,v,lv+1);
     }
 }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        int lv=0;
        bombit(root,v,lv);
        return v;
    }
};