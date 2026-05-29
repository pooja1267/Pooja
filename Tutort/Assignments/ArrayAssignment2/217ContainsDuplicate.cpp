#include<iostream>
#include<unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> check;
    for(auto i : nums)
    {
        if(check.find(i) == check.end())
            check.insert(i);
        else
            return true;
    }
    return false;
}

int main()
{
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    cout<<boolalpha<<containsDuplicate(nums);
    return 0;
}