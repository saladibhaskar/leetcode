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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            int s=q.size();
            int n=0;
            while(s--)
            {
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                if(c%2!=0)
                {
                   if((temp->val)%2==0){
                       if(n==0) n=(temp->val);
                       else if(n>temp->val) n=(temp->val);
                       else return false;
                   }
                   else return false;
                }else
                {
                    if((temp->val)%2!=0)
                    {
                        if(n==0) n=(temp->val);
                        else if(n<temp->val)n=(temp->val);
                        else return false;
                    }
                    else return false;
                }
            }
            c++;
            n=0;
        }
        return true;
    }
};