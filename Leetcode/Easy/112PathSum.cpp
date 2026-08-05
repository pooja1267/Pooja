#include "../LinkedList.h"
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(!root)
        {
            return false;
        }

        if(!root->left && !root->right)
        {
            if(targetSum == root->val)
                return true;
            else
                return false;
        }

        int remainingTargetSum = targetSum - root->val;
        return hasPathSum(root->left, remainingTargetSum) || hasPathSum(root->right, remainingTargetSum);
        
    }
};