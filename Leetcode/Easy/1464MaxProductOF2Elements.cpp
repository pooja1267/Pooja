#include "../LinkedList.h"
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        #if 0
        sort(nums.begin(), nums.end());
        return ( (nums[nums.size() - 1] -1) * (nums[nums.size() - 2]-1));
        #endif //n*logn

        int first = 0;
        int second = 0;

        for(auto i : nums)
        {
            if(i > first)
            {
                second = first;
                first = i;
            }
            else if(( i>second) /*&& ( i!=first)*/)
                second = i;
        }

        return (first-1) * (second-1);
              
    }
};