#include "../LinkedList.h"
class Solution {
public:
    int minDepth(TreeNode* root) {

        if(!root)
            return 0;
       
        int depthLeft = 0, depthRight = 0;
       // if(root->left)
            depthLeft = minDepth(root->left);

        //if(root->right)
            depthRight = minDepth(root->right);

        if(depthLeft && depthRight)
        {
            return min(depthLeft, depthRight)+1;
        }
        else
            return max(depthLeft, depthRight)+1;     
    }
};