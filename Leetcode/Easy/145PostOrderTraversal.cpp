#include "../LinkedList.h"
class Solution {
public:
    void postOrderTravHelper(TreeNode *root, vector<int> &res)
    {
        if(!root)
            return;

        postOrderTravHelper(root->left, res);
        postOrderTravHelper(root->right, res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        postOrderTravHelper(root, res);
        return res;
    }
};