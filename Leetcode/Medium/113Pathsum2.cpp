#include "../LinkedList.h"

class Solution {
public:
    void pathSumHelper(TreeNode* root, int targetSum, vector<vector<int>>& res,
                       vector<int>& currPath) {
        if (!root)
            return;

        currPath.push_back(root->val);
        int newtarget = targetSum - root->val;
        if (!root->left && !root->right) {
            if (newtarget == 0) {
                res.push_back(currPath);
            }
        } else {

            pathSumHelper(root->left, newtarget, res, currPath);
            pathSumHelper(root->right, newtarget, res, currPath);
        }
        currPath.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> currPath;
        pathSumHelper(root, targetSum, res, currPath);
        return res;
    }
};