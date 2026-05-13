#include<iostream>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            if(i==0)
                continue;
            else 
                nums[i] += nums[i-1];
        }
        return nums;        
    }

int main()
{
    vector<int> nums = {1,1,1,1,1};
    nums=runningSum(nums);
    for(auto i : nums)
        cout<<i<<"\t";
    return 0;
}