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
    map<long long ,long long >mp;
    void bombit(TreeNode* root,int lv)
    {
        if(root)
        {
            mp[lv]+=root->val;
            lv+=1;
            bombit(root->left,lv);
            bombit(root->right,lv);
        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        mp.clear();
        long long lv=1;
        bombit(root,lv);
        vector<long long>v;
        for( auto it:mp)
        {
            v.push_back(it.second);
        }
    sort(v.begin(),v.end());
    if(v.size()<k)return -1;
    return v[v.size()-k];

    }
};