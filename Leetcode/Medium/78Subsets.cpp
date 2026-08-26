#include "../LinkedList.h"
class Solution {
public:
    void subsetHelper(vector<int> nums, int start, vector<vector<int>> &result, vector<int> current)
    {
        result.push_back(current);
        for(int i = start; i < nums.size(); i++)
        {
            current.push_back(nums[i]);
            subsetHelper(nums, i+1, result, current);
            current.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        subsetHelper(nums, 0, res, curr);
        return res;
        
    }
};