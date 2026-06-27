#include<iostream>
#include <numeric>
using namespace std;
int pivotIndex(vector<int>& nums) 
{
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int currentLeftSum = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        if(currentLeftSum == (totalSum - nums[i]-currentLeftSum))
            return i;
        
            currentLeftSum+=nums[i];
    }

    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6}, nums2 = {1,2,3}, nums3 = {2,1,-1};
    cout<<pivotIndex(nums)<<endl;
    cout<<pivotIndex(nums2)<<endl;
    cout<<pivotIndex(nums3)<<endl;
    return 0;
}