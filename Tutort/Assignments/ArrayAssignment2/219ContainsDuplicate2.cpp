#include<iostream>
using namespace std;
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(temp.find(nums[i]) != temp.end())
            {
                if(abs(i-temp[nums[i]]) <=k)
                    return true;
            }
            temp[nums[i]] = i;
        }
        return false;
    }

int main()
{
    vector<int> nums = { 1,2,3,1,2,3};
    cout<<boolalpha<<containsNearbyDuplicate(nums,2);
    return 0;
}