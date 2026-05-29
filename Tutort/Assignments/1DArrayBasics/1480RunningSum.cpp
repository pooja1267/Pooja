#include<iostream>
using namespace std;
vector<int> runningSum(vector<int>& nums)
{
    vector<int> result;
    result.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++ )
    {
        result.push_back(result[i-1]+nums[i]);
    }
    return result;
}

int main()
{
    vector<int> n1 = {3,1,2,10,1};
    vector<int> res = runningSum(n1);
    for(auto i : res)
        cout<<i<<"\t";

    return 0;
}