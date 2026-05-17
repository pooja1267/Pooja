#include<iostream>
#include<bitset>
#include<set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    set<int> temp;
    for(auto i: nums)
    {
        if(temp.find(i) != temp.end())
            return true;
        else 
            temp.insert(i);
    }
    return false;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    cout<<std::boolalpha<< containsDuplicate(nums);
    return 0;
}