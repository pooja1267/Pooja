#include<iostream>
using namespace std;
int thirdMax(vector<int>& nums)
{
    long long firstMax = LLONG_MIN;
    long long secondMax = LLONG_MIN;
    long long thirdMax = LLONG_MIN;

    for(auto i : nums)
    {
        if(i>firstMax)
        {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = i;
        }
        else if(i>secondMax && i!=firstMax)
        {
            thirdMax = secondMax;
            secondMax = i;
        }
        else if(i>thirdMax && i!=firstMax && i!=secondMax)
        {
            thirdMax = i;
        }
    }

    if(thirdMax == LLONG_MIN)
        return firstMax;
    else 
        return thirdMax;
}
int main()
{
    vector<int> nums = {2,2,3,1};
    int res = thirdMax(nums);
    cout<<res<<endl;
    return 0;
}