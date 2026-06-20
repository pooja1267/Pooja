#include<iostream>
#include<unordered_set>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {
    int windowSize = 0;
    int start = 0, end = 0;
    long long currSum = 0, maxSum = 0;
   
    
    unordered_set<int> window;
    while(end < nums.size())
    {
        while(window.count(nums[end]))
        {
            currSum -= nums[start];
            window.erase(nums[start]);
            start++;
        }

        window.insert(nums[end]);
        currSum += nums[end];

        if(end-start+1 > k)
        {
            currSum -= nums[start];
            window.erase(nums[start]);
            start++;
        }

        if(end-start+1 == k)
        {
            maxSum = max(maxSum, currSum);
        }
        end++;
    }
    return maxSum;    
}


int main()
{
    vector<int> nums = {1,5,4,3,9,8,9,2,6};
    cout<<maximumSubarraySum(nums,4);
    return 0;
}