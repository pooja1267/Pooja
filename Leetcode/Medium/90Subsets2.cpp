#include "../LinkedList.h"

class Solution {
public:

     void subsetHelper(vector<int> nums, int start, vector<int> &current, set<vector<int>> &res)
    {
        res.insert(current);
        for(int i = start; i<nums.size();i++)
        {
            current.push_back(nums[i]);
            subsetHelper(nums, i+1, current, res);
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        
        subsetHelper(nums, 0, curr, res);
        vector<vector<int>> output (res.begin(), res.end());
        //output = res;
        return output;
    }
};