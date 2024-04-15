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
    int ans=0;
    void bombit(TreeNode*root,string s)
    {
        if(root)
        {
            if(root->right ==NULL && root-> left == NULL )
            {
                s+=to_string(root->val);
               // v.push_back(stoi(s));
              if(s.size()!=0) ans+=stoi(s);
                return;
            }
            bombit(root->left,s+to_string(root->val));
            bombit(root->right,s+to_string(root->val));
        }
    }
    int sumNumbers(TreeNode* root) {
        bombit(root,"");
        return ans;
        
    }
};