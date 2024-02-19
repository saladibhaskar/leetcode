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
    int cnt=0;
    vector<int> bombit(TreeNode *root)
    {
        if(root==NULL)return {0, 0};
        if(root->left==NULL && root->right==NULL)
        {
            cnt++;
            vector<int>v(2,0);
            v[0]=(root->val);
            v[1]=1;
            return v;
        }
        vector<int>x=bombit(root->left);
        vector<int>y=bombit(root->right);
        if(root->val==round((x[0]+y[0] + root->val)/(x[1]+y[1] + 1)))
        {
            cnt++;
        }
        x[0]=x[0]+y[0] + root->val;
        x[1]=x[1]+y[1] + 1;
        return x;
    }
    int averageOfSubtree(TreeNode* root) {
        bombit(root);
        return cnt;
    }
};