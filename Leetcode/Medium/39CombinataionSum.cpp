#include "../LinkedList.h"
class Solution {
public:
    void combinationSumHelper(vector<int> candidates,int index, int target, vector<vector<int>> &res, vector<int> currPath, int currSum)
    {
        if(target == currSum)
        {
            res.push_back(currPath);
            return;
        }

        if(currSum > target)
        {
            return;
        }

        for(int i = index; i < candidates.size(); i++)
        {
            currPath.push_back(candidates[i]); 
            combinationSumHelper(candidates, i, target, res, currPath, currSum +candidates[i] );
            currPath.pop_back();    
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        set<vector<int>> res;
        vector<vector<int>> result;
        vector<int> path;
        combinationSumHelper(candidates, 0, target, result, path, 0);
        
        return result;
    }
};