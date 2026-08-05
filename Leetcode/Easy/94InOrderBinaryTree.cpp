#include "../LinkedList.h"
class Solution {
public:
    void inorderHelper(TreeNode *root, vector<int> &res)
    {
        if(!root)
            return;

        inorderHelper(root->left, res);
        res.push_back(root->val);
        inorderHelper(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderHelper(root, res);
        return res;
     
    }
};