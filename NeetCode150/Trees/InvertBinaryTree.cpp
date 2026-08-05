#include "../LinkedList.h"
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(!root || (!root->left && !root->right))
            return root;

        TreeNode *tempLeft = invertTree(root->left);
        TreeNode *tempRight = invertTree(root->right);

        root->left = tempRight;
        root->right = tempLeft;
        return root;         
    }
};