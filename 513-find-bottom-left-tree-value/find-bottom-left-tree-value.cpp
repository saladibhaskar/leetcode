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
    int mx=0,ele=0;
    void bombit(TreeNode*root,int c=1)
    {
        if(root!=NULL){
            if(c>mx){
                mx=c;
                ele=root->val;
            }
            bombit(root->left,c+1);
            bombit(root->right,c+1);
        }
        return;
    }
    int findBottomLeftValue(TreeNode* root) {
        mx=0;
        ele=0;
        if(root->right==NULL && root->left==NULL)return root->val;
        bombit(root);
        return ele;
    }
};