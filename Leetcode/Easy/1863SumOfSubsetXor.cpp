#include "../LinkedList.h"
class Solution {
public:
    void subsetXorHelper(vector<int> &nums, int start, int currentXor, int &sum )
    {
        sum += currentXor;
        if(start == nums.size())
        {          
            return;
        }

        
        for(int i = start; i <nums.size(); i++ )
        {
            currentXor ^= nums[i];
            subsetXorHelper(nums, i+1, currentXor, sum);
            currentXor ^= nums[i];
        }
    }
    int subsetXORSum(vector<int>& nums) {

     int result = 0;
     int current = 0;
     subsetXorHelper(nums, 0, current, result);
     return result;

    }
};