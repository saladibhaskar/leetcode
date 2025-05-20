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
    int maxdep(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int rightheight=maxdep(root->right);
        int leftheight=maxdep(root->left);

        int maxheight=max(rightheight,leftheight)+1;
        return maxheight;

    }
    int maxDepth(TreeNode* root) {

        return maxdep(root);
        
    }
};