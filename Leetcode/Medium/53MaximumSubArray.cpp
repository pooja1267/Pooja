#include<iostream>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int max_sum = INT_MIN;
    for(auto i : nums)
    {
        sum += i;
        if(sum<0)
            sum = 0;

        max_sum = max(sum, max_sum);
    }        
    return max_sum;
}

int main()
{
    vector <int> nums = {5,4,-1,7,8};
    cout<<maxSubArray(nums);
    return 0;
}