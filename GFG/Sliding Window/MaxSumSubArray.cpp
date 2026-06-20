#include<iostream>
using namespace std;
int maxSumSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    if(n<=k)
    {
        cout<<"Invalid input";
        return -1;
    }

    int max_sum = 0;
    for(int i = 0; i<k; i++)
        max_sum += nums[i];

    int window_sum = max_sum;
    for(int i = k; i < n; i++)
    {
        window_sum += nums[i] - nums[i-k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;    
}

int main()
{
    vector<int> arr = {5,2,-1,0,3};
    int k = 3;
    cout<<maxSumSubarray(arr,k);
    return 0;
}