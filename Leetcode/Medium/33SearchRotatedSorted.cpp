#include<iostream>
using namespace std;
int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[start] < nums[mid]) //First half sorted
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
                if(target> nums[mid] && target<nums[end])
                {
                    start = mid+1;
                }
                else
                    end = mid-1;
            }
        }
        return -1;
    }

int main()
{
    vector<int> nums1 = {4,5,6,7,0,1,2}, nums2 = {4,5,6,7,0,1,2}, nums3 = {1};
    cout<<search(nums1, 0)<<endl;
    cout<<search(nums2, 3)<<endl;
    cout<<search(nums3, 0)<<endl;
    return 0;
}
    
