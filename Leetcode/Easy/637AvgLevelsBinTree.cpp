#include "../LinkedList.h"
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        long long levelSum = 0, levelCount = 0;
        while (!q.empty()) 
        {
            TreeNode* temp = q.front();
            q.pop();
            if (temp) 
            {
                levelSum += temp->val;
                levelCount++;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            } 
            else 
            {
                res.push_back((double)levelSum / levelCount);
                levelSum = 0;
                levelCount = 0;
                if (!q.empty())
                    q.push(nullptr);
            }
        }

        return res;
    }
};