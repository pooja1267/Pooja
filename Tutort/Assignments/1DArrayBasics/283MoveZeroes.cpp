#include<iostream>
using namespace std;
void moveZeroes(vector<int>& nums) {
        auto it = find(nums.begin(), nums.end(), 0);
        if(it == nums.end())
        {
            return;
        }

        int index=0;
        while(nums[index]!=0)
            index++;
        
        for(int i=index+1; i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }

int main()
{
    vector<int> nums = {0};
    moveZeroes(nums);
    for(auto i : nums)
        cout<<i<<"\t";
    
    return 0;
}