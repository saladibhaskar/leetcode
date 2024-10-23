class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) return nullptr;

        // Use a queue for BFS traversal (iterative)
        queue<TreeNode*> q;
        q.push(root);
        root->val = 0;  // The root node does not have any cousins, set its value to 0

        while (!q.empty()) {
            int levelSize = q.size();  // Number of nodes at the current level
            int levelSum = 0;  // Sum of values of nodes at the current level
            vector<TreeNode*> nodes;  // To store nodes at the current level

            // First pass: Calculate the sum of values at the current level
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                nodes.push_back(node);

                if (node->left) {
                    levelSum += node->left->val;
                    q.push(node->left);  // Add left child to the queue
                }
                if (node->right) {
                    levelSum += node->right->val;
                    q.push(node->right);  // Add right child to the queue
                }
            }

            // Second pass: Update the value of each node based on the level sum
            for (TreeNode* node : nodes) {
                int siblingSum = 0;
                // Calculate the sibling sum for each node's children
                if (node->left) siblingSum += node->left->val;
                if (node->right) siblingSum += node->right->val;

                // Update the value of left child (cousins' sum = levelSum - siblingSum)
                if (node->left) {
                    node->left->val = levelSum - siblingSum;
                }

                // Update the value of right child
                if (node->right) {
                    node->right->val = levelSum - siblingSum;
                }
            }
        }

        return root;
    }
};
