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
    int sm=0;
    void bombit(TreeNode *root)
    {
          if(root!=NULL)
          {
            bombit(root->right);
            sm+=root->val;
            root->val=sm;
            bombit(root->left);
          }

    }
    TreeNode* bstToGst(TreeNode* root) {
        bombit(root);
        return root;
    }
};