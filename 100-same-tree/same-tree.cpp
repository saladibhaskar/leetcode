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
bool ans=true;
    void bombit(TreeNode*p,TreeNode *q)
    {
        if(p!=NULL && q!=NULL)
        {
            if(p->val!=q->val){
                ans=false;
                return;
            }
            bombit(p->right,q->right);
            bombit(p->left,q->left);
        }
        else if((p==NULL && q!=NULL)||(q==NULL && p!=NULL))
        {
            ans=false;
            return;
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        ans=true;
        bombit(p,q);
        return ans;
        
    }
};