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
    int mx=1,tx=0;
    void bombit(TreeNode*root,int c=1 )
    {
        if(root==NULL) return;
        if(c>mx)mx=c;
        bombit(root->left,c+1);
        bombit(root->right,c+1);
    }
    void findit(TreeNode*root)
    {
        if(root!=NULL)
        {
        mx=1;
        int a=0,b=0;
        if(root->left !=NULL)
        {
            bombit(root->left);
            a=mx;
        }
        mx=1;
       if(root->right!=NULL) 
       {bombit(root->right);
         b=mx;
       }
       if(a+b>tx)tx=a+b;
       findit(root->left);
       findit(root->right);
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        mx=1;
        findit(root);
    //     int a=0,b=0;
    //     if(root->left !=NULL)
    //     {
    //         bombit(root->left);
    //         a=mx;
    //     }
    //     mx=1;
    //    if(root->right!=NULL) 
    //    {bombit(root->right);
    //      b=mx;
    //    }
        return tx;
    }
};