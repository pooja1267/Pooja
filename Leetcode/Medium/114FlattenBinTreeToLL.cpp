#include "../LinkedList.h"
class Solution {
public:
    TreeNode* helper(TreeNode* root) {
        if (!root || (!root->left && !root->right))
            return root;

        TreeNode* tempLeft = helper(root->left);
        TreeNode* tempRight = helper(root->right);

        if (tempLeft) {
            tempLeft->right = root->right;
            root->right = root->left;
            root->left = nullptr;
        }

        return (tempRight != nullptr ? tempRight : tempLeft);
    }
    void flatten(TreeNode* root) { helper(root); }
};