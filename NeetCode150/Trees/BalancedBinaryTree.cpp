#include "../LinkedList.h"
class Solution {
public:
    int currHeight(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        int heightLeft = currHeight(root->left);
        int heightRight = currHeight(root->right);
          
        if(heightLeft == -1 || heightRight == -1)
            return -1;
        else if(abs(heightLeft-heightRight)>1)
            return -1;
        else
            return max(heightLeft, heightRight) +1;
    }
    bool isBalanced(TreeNode* root) {
        int height = currHeight(root);
        if(height == -1)
            return false;
        else
            return true;        
    }
};