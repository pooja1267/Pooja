#include "../LinkedList.h"
class Solution {
public:
    int diameterHelper(TreeNode* root, int& depth) 
    {
        if (!root || (!root->left && !root->right)) 
        {
            depth = 0;
            return 0;
        }
        int depthLeft = 0, depthRight = 0, diameterLeft = 0, diameterRight = 0;
        diameterLeft = diameterHelper(root->left, depthLeft);
        diameterRight = diameterHelper(root->right, depthRight);
        depth = max(depthLeft, depthRight)+1;
        int currentDiameter = (root->left ? depthLeft+1 : 0) + ( root->right ? depthRight+1 : 0);
        return max(max(diameterLeft, diameterRight), currentDiameter);       
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int depth = 0;
        return diameterHelper(root, depth);
    }
};