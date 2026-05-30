#include<iostream>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    if(nums.empty())
        return 0;

    int start = 0;
    int end = nums.size()-1;

      
    while(true)
    {
        while(start<nums.size() && nums[start]!= val)
            start++;

        while(end>=0 && nums[end]==val)
            end--;

        if(start<end)
            swap(nums[start],nums[end]);    
        else
            break;
    }
    if(start== nums.size())
        return nums.size();
    else if(end == -1)
    {
        nums.clear();
        return 0;
    }
 
    return end+1;
}

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int res = removeElement(nums,val);
    cout<<res<<endl;
    return 0;
}