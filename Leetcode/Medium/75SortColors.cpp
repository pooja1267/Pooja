#include "../LinkedList.h"

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==1)
            return;

        int p0 = 0;
        int p1 = 0;
        int p2 = nums.size()-1;
        while(p1<=p2)
        {
            switch(nums[p1])
            {
                case 0:
                    swap(nums[p0], nums[p1]);
                    p0++;
                    p1++;
                    break;

                case 1:
                    p1++;
                    break;

                case 2:
                    swap(nums[p1], nums[p2]);
                    p2--;
                    break;
            }
        }
    }
};