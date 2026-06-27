#include<iostream>
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long len = 0;
        for(int i = 0; i< nums.size();)
        {
            while(i<nums.size() && nums[i] == 0)
            {
                len++;
                i++;
            }
            if(len)
            {
                count += (len*(len+1))/2;
                len = 0;
            }
            i++;
        }
        return count;
    }

int main()
{
    vector<int> nums = {1,3,0,0,2,0,0,4}, nums2 = {0,0,0,2,0,0}, nums3= {2,10,2019};
    cout<<zeroFilledSubarray(nums)<<endl;
    cout<<zeroFilledSubarray(nums2)<<endl;
    cout<<zeroFilledSubarray(nums3)<<endl;
    return 0;
}