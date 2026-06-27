#include<iostream>
using namespace std;
bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(nums[mid] == target)
                return true;

            if(nums[start] == nums[mid] && nums[mid] == nums[end])
            {
                start++;
                end--;
                continue;
            }
            
            if(nums[start] <= nums[mid]) //First half sorted
            {
                if(target>=nums[start] && target<nums[mid]) //Present in first half
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else //Second half is sorted
            {
                if(target> nums[mid] && target<=nums[end])
                {
                    start = mid+1;
                }
                else
                    end = mid-1;
            }
        }
        return false;
    }

int main()
{
    vector<int> nums = { 2,5,6,0,0,1,2}, nums2 = {2,5,6,0,0,1,2}, nums3 = {1,0,1,1,1};
    cout<<boolalpha<<search(nums, 0)<<endl;
    cout<<boolalpha<<search(nums2, 3)<<endl;
    cout<<boolalpha<<search(nums3, 0)<<endl;
    return 0;

}