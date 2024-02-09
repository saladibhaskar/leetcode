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
void ino(TreeNode *root,int cnt,int &mx)
    {
        if(root!=NULL)
        {
           if(cnt>mx) mx=cnt;
           ino(root->left,cnt+1,mx);
           ino(root->right,cnt+1,mx);
            
        }
    }
    int maxDepth(TreeNode* root) {
        int cnt=0;
        int mx=0;
        if(root==NULL)return 0;
        ino(root,cnt,mx);
        return mx+1;
    }
};