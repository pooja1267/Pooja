#include "../LinkedList.h"
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(), nums.end());
        int i = 0;
        
        while(i<nums.size()-1)
        {
            swap(nums[i], nums[i+1]);
            i+=2;
        }
        return nums;
    }
};