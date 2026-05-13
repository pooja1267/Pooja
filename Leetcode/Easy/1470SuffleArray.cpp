#include<iostream>
#include<vector>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
    int first = 0;
    int second = n;
    vector<int> result;
    while(first<n && second<(2*n))
    {
        result.push_back( nums[first]);
        result.push_back(nums[second]);
        first++;
        second++;
    }
    return result;
}

int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    vector<int> res = shuffle(nums,3);
    for(auto i : res)
        cout<<i<<"\t";

    cout<<endl;
    return 0;
}