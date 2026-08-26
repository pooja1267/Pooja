#include "../LinkedList.h"
class Solution {
public:
    void binaryPathHelper(TreeNode *root, string currentPath, vector<string> &res)
    {
        if(!root)
        {
            
            return;
        }

        currentPath += to_string(root->val);
        if(!root->left && !root->right)
        {
            
            res.push_back(currentPath);
            return;
        }
        currentPath += "->";
        binaryPathHelper(root->left, currentPath, res);
        binaryPathHelper(root->right, currentPath, res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string curr=""; vector<string> result;
        binaryPathHelper(root, curr, result);
        return result;

    }
};