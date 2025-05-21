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
 struct Info{
    int h;
    TreeNode *lca;
};

class Solution {
public:

    Info Find(TreeNode *root){
        if(root==NULL)return {0,nullptr};
        Info left = Find(root->left);
        Info right = Find(root->right);
        Info curr;
        if(left.h == right.h){
            curr.h = left.h+1;
            curr.lca = root;
        }
        else if(left.h > right.h){
            curr.h = left.h+1;
            curr.lca = left.lca;
        }
        else{
            curr.h = right.h+1;
            curr.lca = right.lca;
        }
        return curr;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        Info ans = Find(root);
        return ans.lca;
    }

};