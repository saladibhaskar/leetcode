/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 struct Info{
    TreeNode*lca;
    bool foundp=false;
    bool foundq=false;
 };
class Solution {
public:
     Info findit(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return {nullptr, false, false};

        Info left = findit(root->left, p, q);
        Info right = findit(root->right, p, q);

        // Determine if current subtree contains p or q
        bool foundp = (root == p) || left.foundp || right.foundp;
        bool foundq = (root == q) || left.foundq || right.foundq;

        // If current node is LCA
        if (root == p || root == q) {
            return {root, foundp, foundq};
        }
        if (left.lca && right.lca) {
            return {root, foundp, foundq};
        }
        if (left.lca) return {left.lca, foundp, foundq};
        if (right.lca) return {right.lca, foundp, foundq};

        // No LCA found yet
        return {nullptr, foundp, foundq};
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        Info ans = findit(root, p, q);
        return ans.lca;
    }
};